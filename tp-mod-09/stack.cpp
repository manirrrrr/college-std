#include "stack.h"

void createStack_1305220010(stack &S)
{
    Top(S) = 0;
}

bool isEmpty_1305220010(stack S)
{
    if (Top(S) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isFull_1305220010(stack S)
{
    if (Top(S) == 15)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void push_1305220010(stack &S, infotype x)
{
    if (isFull_1305220010(S) == false)
    {
        Top(S) += 1;
        info(S)[Top(S)] = x;
    }
}

infotype pop_1305220010(stack &S)
{
    infotype x;
    x = info(S)[Top(S)];
    Top(S) -= 1;
    return x;
}

void printInfo_1305220010(stack S)
{
    for (int i = Top(S); i > 0; i--)
    {
        cout << info(S)[i] << " ";
    }
    cout << endl;
}
