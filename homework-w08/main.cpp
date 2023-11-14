#include "stack.h"

int main()
{
    stack S;

    createStack(S);

    string input;
    cin >> input;
    stringToStack(S, input);

    printInfo(S);

    return 0;
}