#include "stack.h"

int main()
{
    stack S;

    createStack_1305220010(S);

    int len = 0;
    cout << "Banyaknya input: ";
    cin >> len;

    for (int i = 0; i < len; i++)
    {
        char input;

        cout << "Input " << i << ": ";
        cin >> input;
        push_1305220010(S, input);
    }

    printInfo_1305220010(S);

    int del = 0;
    cout << "Banyaknya hapus: ";
    cin >> del;

    for (int i = 0; i < del; i++) {
        pop_1305220010(S);
    }

    printInfo_1305220010(S);

    return 0;
}