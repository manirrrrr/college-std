#include <iostream>
#include "list.h"
using namespace std;

void createList_1305220010(List &L)
{
    first(L) = NULL;
}

address allocate_1305220010(infotype x)
{
    address p = new elmlist;
    info(p) = x;
    next(p) = NULL;

    return p;
}

void insertFirst_1305220010(List &L, address P)
{
    next(P) = first(L);
    first(L) = P;
}

void printInfo_1305220010(List L)
{
    address p = first(L);
    while (p != NULL)
    {
        cout << info(p) << ", ";
        p = next(p);
    }
    cout << endl;
}
