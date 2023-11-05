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
    prev(P) = NULL;
    return P;
}

void dealokasi_1305220010(address &P)
{
    delete P;
}

void insertFirst_1305220010(List &L, address P)
{
    if (first(L) == NULL && last(L) == NULL)
    {
        first(L) = P;
        last(L) = P;
    }
    else
    {
        next(P) = first(L);
        prev(first(L)) = P;
        next(last(L)) = P;
        prev(P) = last(L);
        first(L) = P;
    }
}

void insertAfter_1305220010(List &L, address Prec, address P)
{
    next(P) = next(Prec);
    prev(next(Prec)) = P;
    next(Prec) = P;
    prev(P) = Prec;
}

void insertLast_1305220010(List &L, address P)
{
    if (first(L) == NULL && last(L) == NULL)
    {
        first(L) = P;
        last(L) = P;
    }
    else
    {
        prev(P) = last(L);
        next(last(L)) = P;
        prev(first(L)) = P;
        next(P) = first(L);
        last(L) = P;
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
            if (info(P) == x)
            {
                return P;
            }
            P = next(P);
        } while (next(P) != first(L));
        return NULL;
    }
}

void deleteFirst_1305220010(List &L, address &P)
{
    if (next(first(L)) == NULL)
    {
        first(L) = NULL;
        last(L) = NULL;
    }
    else
    {
        next(last(L)) = next(P);
        prev(next(P)) = last(L);
        first(L) = next(P);
        next(P) = NULL;
        prev(P) = NULL;
    }
}

void deleteAfter_1305220010(List &L, address Prec, address &P)
{
    next(Prec) = next(P);
    prev(next(P)) = Prec;
    next(P) = NULL;
    prev(P) = NULL;
}

void deleteLast_1305220010(List &L, address &P)
{
    if (prev(last(L)) == NULL)
    {
        last(L) = NULL;
        first(L) = NULL;
    }
    else
    {
        prev(first(L)) = prev(P);
        next(prev(P)) = first(L);
        last(L) = prev(P);
        next(P) = NULL;
        prev(P) = NULL;
    }
}

void printInfo_1305220010(List L)
{
    if (first(L) == NULL && last(L) == NULL)
    {
        cout << "List kosong" << endl;
    }
    else
    {
        address P = first(L);
        do
        {
            if (next(P) == first(L))
            {
                cout << info(P) << endl;
            }
            else
            {
                cout << info(P) << ", ";
            }

            P = next(P);
        } while (next(P) != first(L))
    }
}

void deleteByValue_1305220010(List &L, infotype x)
{
    if (first(L) == NULL && last(L) == NULL)
    {
        cout << "List kosong" << endl;
    }
    else
    {
        bool found = false;
        address P = first(L);
        do
        {
            if (info(P) == x)
            {
                found = true;
                if (P == first(L))
                {
                    deleteFirst_1305220010(L, P);
                }
                else if (P == last(L))
                {
                    deleteLast_1305220010(L, P);
                }
                else
                {
                    deleteAfter_1305220010(L, prev(P), P);
                }
                dealokasi_1305220010(P);
            }
            P = next(P);
        } while (next(P) != first(L));

        if (!found)
        {
            cout << "Value tidak ditemukan" << endl;
        }
    }
}

void reverseList_1305220010(List L, List &L2)
{
    if (first(L) == NULL && last(L) == NULL)
    {
        cout << "List kosong" << endl;
    }
    else
    {
        address P = last(L);
        do
        {
            insertLast_1305220010(L2, alokasi_1305220010(info(P)));
            P = prev(P);
        } while (prev(P) != last(L));
    }
}