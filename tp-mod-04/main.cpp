#include <iostream>
#include "list.h"

using namespace std;

int main()
{
    List list;
    infotype x;

    createList_1305220010(list);

    cout << "Masukkan NIM per digit" << endl;
    for (int i = 1; i <= 3; i++)
    {
        cout << "Digit "<<i<<": ";
        cin >> x;

        address newElement = allocate_1305220010(x);

        insertFirst_1305220010(list, newElement);
    }
    printInfo_1305220010(list);

    return 0;
}