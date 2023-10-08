#include <iostream>
#include "list.h"

using namespace std;

int main()
{
    List list;
    infotype x;

    createList(list);

    cout << "Masukkan NIM per digit" << endl;
    cout << "Digit 1:";
    cin >> x;

    address newElement = allocate(x);

    insertFirst(list, newElement);

    printInfo(list);

    return 0;
}