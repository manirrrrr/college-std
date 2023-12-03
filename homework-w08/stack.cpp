#include "stack.h"

void createStack(stack &S)
{
    Top(S) = 0;
    TopS(S) = NULL;
}

address createElmList(infotype P)
{
    address Q = new elmList;
    info(Q) = P;
    next(Q) = NULL;
    prev(Q) = NULL;

    return Q;
}

bool isEmpty(stack S)
{
    if (Top(S) == 0 && TopS(S) == NULL)
    {
        return true;
    }
    return false;
}

bool isFull(stack S)
{
    if (Top(S) == MAXSTACK)
    {
        return true;
    }
    return false;
}

void push(stack &S, address P)
{
    if (isFull(S))
    {
        cout << "Stack penuh" << endl;
    }
    else if (TopS(S) == NULL)
    {
        TopS(S) = P;
        next(TopS(S)) = P;
        prev(TopS(S)) = P;
        Top(S) += 1;
    }
    else
    {
        next(P) = TopS(S);
        prev(P) = prev(TopS(S));
        next(prev(TopS(S))) = P;
        prev(TopS(S)) = P;
        TopS(S) = P;
        Top(S) += 1;
    }
}

void pop(stack &S, address &P)
{
    if (isEmpty)
    {
        cout << "Stack kosong" << endl;
    }
    else if (next(TopS(S)) == NULL)
    {
        P = TopS(S);
        TopS(S) = NULL;
        Top(S) = 0;
    }
    else
    {
        P = TopS(S);
        prev(next(P)) = prev(P);
        next(prev(P)) = next(P);
        TopS(S) = next(P);
        next(P) = NULL;
        prev(P) = NULL;
        Top(S) -= 1;
    }
}

void printInfo(stack S)
{
    if (isEmpty(S))
    {
        cout << "Stack kosong" << endl;
    }
    else
    {
        address P = TopS(S);
        do
        {
            cout << info(P) << "  ";
            P = next(P);
        } while (next(P) != TopS(S));
        cout << endl;
    }
}

void stringToStack(stack &S, infotype str)
{
    int j = 0;
    string join;
    string cStr;

    int strLen = 0;
    while (str[strLen] != NULL)
    {
        strLen += 1;
    }

    for (int i = strLen; i >= 0; i--)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            join = str[i] + join;
            j += 1;

            if (str[i - 1] == NULL || (str[i - 1] < '0' || str[i - 1] > '9'))
            {
                address P = createElmList(join);
                push(S, P);
                join = "";
                j = 0;
            }
        }
        else
        {
            cStr = str[i];
            address P = createElmList(cStr);
            push(S, P);
            j = 0;
        }
    }
}

int getPriority(infotype C)
{
    if (C[0] == '-' || C[0] == '+')
    {
        return 1;
    }
    else if (C[0] == '*' || C[0] == '/')
    {
        return 2;
    }
    return 0;
}

bool isOperator(infotype C)
{
    char ch = C[0];
    if (ch == '-' || ch == '+' || ch == '*' || ch == '/')
    {
        return true;
    }
    else
    {
        return false;
    }
}

void infixToPostfix(stack &S)
{
    stack SOperator;
    createStack(SOperator);

    address P = TopS(S);
    address op;

    do
    {
        infotype current = info(P);
        address addrCurrent = createElmList(current);

        if (isOperator(current))
        {
            address Q = P;
            do
            {
                if (!isEmpty(SOperator) &&
                    getPriority(info(Q)) > getPriority(current))
                {
                    op = createElmList(info(Q));

                    pop(SOperator, op);
                    push(S, op);
                }
                Q = next(Q);
            } while (next(Q) != TopS(S));

            push(SOperator, addrCurrent);
        }
        else
        {
            push(S, addrCurrent);
        }
        P = next(P);
    } while (next(P) != TopS(S));

    address R = TopS(SOperator);
    do
    {
        if (!isEmpty(SOperator))
        {
            pop(SOperator, op);
            push(S, op);
        }
    } while (next(R) != TopS(SOperator));
}

void infixToPrefix(stack &S)
{
    stack SOperator;
    createStack(SOperator);

    address P = TopS(S);
    address op;

    do
    {
        infotype current = info(P);
        address addrCurrent = createElmList(current);

        if (isOperator(current))
        {
            address Q = P;
            do
            {
                if (!isEmpty(SOperator) &&
                    getPriority(info(Q)) >= getPriority(current))
                {
                    op = createElmList(info(Q));

                    pop(SOperator, op);
                    push(S, op);
                }
                Q = next(Q);
            } while (next(Q) != TopS(S));
            
            push(SOperator, addrCurrent);
        }
        else
        {
            push(S, addrCurrent);
        }
        P = next(P);
    } while (next(P) != TopS(S));

    address R = TopS(SOperator);
    do
    {
        if (!isEmpty(SOperator))
        {
            pop(SOperator, op);
            push(S, op);
        }
    } while (next(R) != TopS(SOperator));
}


void infixToValue(stack S);

void prefixToValue(stack S)
{
    stack operandStack;
    createStack(operandStack);

    address P = TopS(S);

    do
    {
        infotype current = info(P);

        if (!isOperator(current))
        {
            address operand = createElmList(current);
            push(operandStack, operand);
        }
        else
        {
            address operand1, operand2;
            pop(operandStack, operand1);
            pop(operandStack, operand2);

            infotype op = current;
            
            if (op == "+")
                push(operandStack, createElmList(to_string(stoi(info(operand1)) + stoi(info(operand2)))));
            else if (op == "-")
                push(operandStack, createElmList(to_string(stoi(info(operand1)) - stoi(info(operand2)))));
            else if (op == "*")
                push(operandStack, createElmList(to_string(stoi(info(operand1)) * stoi(info(operand2)))));
            else if (op == "/")
                push(operandStack, createElmList(to_string(stoi(info(operand1)) / stoi(info(operand2)))));
        }

        P = next(P);
    } while (next(P) != TopS(S));

    address result;
    pop(operandStack, result);
    cout << "Result: " << info(result) << endl;
}

void postfixToValue(stack S)
{
    stack operandStack;
    createStack(operandStack);

    address P = TopS(S);

    do
    {
        infotype current = info(P);

        if (!isOperator(current))
        {
            address operand = createElmList(current);
            push(operandStack, operand);
        }
        else
        {
            // Operator encountered, pop two operands, perform operation, and push result back
            address operand1, operand2;
            pop(operandStack, operand1);
            pop(operandStack, operand2);

            infotype op = current;
            if (op == "+")
                push(operandStack, createElmList(to_string(stoi(info(operand2)) + stoi(info(operand1)))));
            else if (op == "-")
                push(operandStack, createElmList(to_string(stoi(info(operand2)) - stoi(info(operand1)))));
            else if (op == "*")
                push(operandStack, createElmList(to_string(stoi(info(operand2)) * stoi(info(operand1)))));
            else if (op == "/")
                push(operandStack, createElmList(to_string(stoi(info(operand2)) / stoi(info(operand1)))));
        }

        P = next(P);
    } while (next(P) != TopS(S));

    address result;
    pop(operandStack, result);
    cout << "Result: " << info(result) << endl;
}
