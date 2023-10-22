#include <iostream>
#include "DLL.h"

using namespace std;

bool isEmpty_1305220010(list L)
{
    if (first(L) == NULL) {
        return true;
    } else {
        return false;
    }
}

address createNewElmt_1305220010(infotype X)
{
    address P = new elmList;
    info(P) = X;
    next(P) = NULL;
    prev(P) = NULL;
    return P;
}

void insertFirst_1305220010(list &L, address P)
{
    bool isListEmpty = isEmpty_1305220010(L);
    if (isListEmpty) {
        first(L) = P;
        last(L) = P;
    } else {
        next(P) = first(L);
        prev(first(L)) = P;
        prev(P) = NULL;
        first(L) = P;
    }
}

void insertAfter_1305220010(list &L, address &Prec, address &P)
{
    next(P) = next(Prec);
    prev(P) = Prec;
    next(Prec) = P;
    prev(next(P)) = P;
}

void insertLast_1305220010(list &L, address P)
{
    bool isListEmpty = isEmpty_1305220010(L);
    if (isListEmpty) {
        first(L) = P;
        last(L) = P;
    } else {
        prev(P) = last(L);
        next(last(L)) = P;
        next(P) = NULL;
        last(L) = P;
    }
}

void deleteFirst_1305220010(list &L, address P)
{
    if (next(first(L)) == NULL) {
        first(L) = NULL;
        last(L) = NULL;
    } else {
        P = first(L);
        first(L) = next(P);
        prev(first(L)) = NULL;
        next(P) = NULL;
    }
    delete P;
}

void deleteAfter_1305220010(list &L, address &Prec, address P)
{
    if (next(Prec) == last(L)) {
        P = next(Prec);
        next(Prec) = NULL;
        prev(P) = NULL;
    } else {
        P = next(Prec);
        next(Prec) = next(P);
        prev(next(P)) = Prec;
        next(P) = NULL;
        prev(P) = NULL;
    }
    delete P;
}

void deleteLast_1305220010(list &L, address P)
{
    if (next(first(L)) == NULL) {
        first(L) = NULL;
        last(L) = NULL;
    } else {
        P = last(L);
        last(L) = prev(P);
        next(last(L)) = NULL;
        prev(P) = NULL;
    }
    delete P;
}

void concat_130520010(list L1, list L2, list &L3)
{
    address Q, R;
    L3 = L1;
    Q = first(L2);
    while (Q != NULL) {
        R = createNewElmt_1305220010(info(Q));
        insertLast_1305220010(L3, R);
        Q = next(Q);
    }
}

address findLagu_1305220010(string Judul, list L)
{
    address P = first(L);
    while (P != NULL) {
        if (info(P) == Judul) {
            return P;
        }
        P = next(P);
    }
    return NULL;
}

void removeLagu_1305220010(string Judul, list &L)
{
    address P, Q, lagu;
    P = first(L);
    if (P != NULL)
    {
        lagu = findLagu_1305220010(Judul, L);
        if (lagu != NULL)
        {
            if (lagu == first(L))
            {
                deleteFirst_1305220010(L, lagu);
            }
            else if (lagu == last(L))
            {
                deleteLast_1305220010(L, lagu);
            }
            else
            {
                Q = prev(lagu);
                deleteAfter_1305220010(L, Q, lagu);
            }
        }
    }
    else
    {
        cout << "List kosong" << endl;
    }
}
