#include <iostream>
#include "auth.h"

using namespace std;

address createNewElm(infotype akun)
{
    address p;
    p = new elmlist;
    info(p) = akun;
    next(p) = Nil;
    prev(p) = Nil;
    return p;
}

void insertLast(address p, list &L)
{
    next(last(L)) = p;
    prev(p) = last(L);
    last(L) = p;
}

address findAkun(string username, list L)
{
    address p = first(L);
    while (p != Nil)
    {
        if (info(p).username == username)
        {
            return p;
        }
        p = next(p);
    }
    return Nil;
}

void signUp(infotype akun, list &L)
{
    address akun = findAkun(akun.username, L);
    if (akun != Nil)
    {
        insertLast(akun, L);
    }
    else
    {
        cout << "Account has been registered." << endl;
    }
}

void deleteFirst(list &L, address p)
{
    p = first(L);
    first(L) = next(p);
    prev(p) = Nil;
    prev(first(L)) = Nil;
    next(p) = Nil;
}

void deleteAfter(list &L, address q, address p)
{
    p = next(q);
    next(q) = next(p);
    prev(next(p)) = q;
    next(p) = Nil;
    prev(p) = Nil;
}

void deleteLast(list &L, address p)
{
    p = last(L);
    last(L) = prev(p);
    next(last(L)) = Nil;
    prev(p) = Nil;
}

void removeAkun(string username, list &L)
{
    address p, q, akun;
    p = first(L);
    if (p != Nil)
    {
        akun = findAkun(username, L);
        if (akun != Nil)
        {
            if (akun == first(L))
            {
                deleteFirst(L, akun);
            }
            else if (akun == last(L))
            {
                deleteLast(L, akun);
            }
            else
            {
                q = prev(akun);
                deleteAfter(L, q, akun);
            }
        }
        delete akun;
    }
    else
    {
        cout << "List kosong" << endl;
    }
}