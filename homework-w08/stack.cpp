#include "stack.h"

void createStack(stack &S)
{
    Top(S) = 0;
}

bool isEmpty(stack S)
{
    if (Top(S) == 0)
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

void push(stack &S, infotype P)
{
    if (isFull(S))
    {
        cout << "Stack penuh" << endl;
    }
    else
    {
        Top(S) += 1;
        info(S)[Top(S)] = x;
    }
}

void pop(stack &S, infotype &P)
{
    if (isEmpty)
    {
        cout << "Stack kosong" << endl;
    }
    else
    {
        P = info(S)[Top(S)];
        Top(S) -= 1;
    }
}

void printInfo(stack S)
{
    for (int i = 1; i <= Top(S); i++)
    {
        cout << info(S)[i] << " ";
    }
    cout << endl;
}

void stringToStack(stack &S, string str)
{
    int i = 0;
    while (str[i] != NULL)
    {
        push(S, str[i]);
        i += 1;
    }
}

void infixToPostfix(stack S, stack &SPost);
void infixToPrefix(stack S, stack &SPre)
{
    
}

void infixToValue(stack S);
void prefixToValue(stack S);
void postfixToValue(stack S);