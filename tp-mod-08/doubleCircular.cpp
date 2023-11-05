#include "doubleCircular.h"

void createList_1305220010(List &L)
{
    first(L) = NULL;
    last(L) = NULL;
}

address alokasi_1305220010(infotype x)
{
    address P = new elmList;
    info(P) = x;
    next(P) = NULL;
    return P;
}

void dealokasi_1305220010(address &P)
{
}

void insertFirst_1305220010(List &L, address P)
{
    if (first(L) == NULL)
    {
        first(L) = P;
        last(L) = P;
    }
    else
    {
        address last = first(L);
        do
        {
            last = next(last);
        } while (next(last) != first(L));
        next(last) = P;
        next(P) = first(L);
        first(L) = P;
    }
}

void insertAfter_1305220010(List &L, address Prec, address P);
void insertLast_1305220010(List &L, address P)
{
    if (first(L) == NULL)
    {
        first(L) = P;
        last(L) = P;
    }
    else
    {
        address last = first(L);
        do
        {
            last = next(last);
        } while (next(last) != first(L));
        next(last) = P;
        next(P) = first(L);
    }
}

address findElm_1305220010(List L, infotype x)
{
    if (first(L) == NULL)
    {
        return NULL;
    }
    else
    {
        address P = first(L);
        do
        {
            if (info(P) == x) {
                return P;
            }
            P = next(P);
        } while (next(P) != first(L));
        return NULL;
    }
}

void deleteFirst_1305220010(List &L, address &P);
void deleteAfter_1305220010(List &L, address Prec, address &P);
void deleteLast_1305220010(List &L, address &P);
void printList_1305220010(List L);
void deleteByValue_1305220010(List &L, infotype x);
void reverseList_1305220010(List L, List &L2);