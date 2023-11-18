#include <iostream>
#include "queue.h"

address alokasi_1305220010(infotype info)
{
    address p = new elmQ;
    info(p) = info;
    next(p) = Nil;

    return p;
}

address findElmt_1305220010(queue Q, infotype num)
{
    address P;
    boolean found;

    P = head(Q);
    found = false;

    while (P != Nil && found == false)
    {
        if (info(P) == num)
        {
            found = true;
        }
        else
        {
            P = next(P);
        }
    }

    return P;
}

bool queueEmpty_1305220010(queue Q)
{
    if (head(Q) == Nil)
    {
        return true;
    }
    return false;
}

void createQueue_1305220010(queue &Q)
{
    head(Q) = Nil;
}
void dealokasi_1305220010(address P)
{
    delete P;
}

void enQueue_1305220010(queue &Q, address P)
{
    if (queueEmpty_1305220010(Q))
    {
        head(Q) = P;
        tail(Q) = P;
    }
    else
    {
        next(tail(Q)) = P;
        tail(Q) = P;
    }
}

void deQueue_1305220010(queue &Q, address P)
{
    if (queueEmpty_1305220010(Q))
    {
        cout << "Queue kosong" << endl;
    }
    else if (next(head(Q)) == Nil)
    {
        P = head(Q);
        head(Q) = Nil;
        dealokasi_1305220010(P);
    }
    else
    {
        P = head(Q);
        head(Q) = next(P);
        next(P) = Nil;
        dealokasi_1305220010(P);
    }
}

void printInfo_1305220010(queue Q)
{
    address P;
    int i = 1;
    P = head(Q);
    if (P == Nil)
    {
        cout << "Queue kosong" << endl;
    }
    else
    {
        while (P != Nil)
        {
            cout << "Antrian ke-" << i << ":" << info(P) << endl;
            P = next(P);
            i++;
        }
    }
}

int nbOfElm_1305220010(queue Q)
{
    int numOfElmt = 0;

    address P;
    P = head(Q);

    while (P != Nil)
    {
        numOfElmt++;
        P = next(P);
    }

    return numOfElmt;
}

void ganjilGenap_1305220010(queue &Q, queue &QGanjil, queue &QGenap)
{
    address P;
    int lenQ = nbOfElm_1305220010(Q);

    for (int i = 1; i < lenQ; i++)
    {
        P = findElmt_1305220010(i);
        if (i % 2 == 0)
        {
            deQueue_1305220010(Q, P);
            enQueue_1305220010(QGenap, P);
        }
        else if (i % 2 != 0)
        {
            deQueue_1305220010(Q, P);
            enQueue_1305220010(QGanjil, P);
        }
    }
}