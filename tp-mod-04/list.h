#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#include <iostream>
#define first(L) L.first
#define next(P) P->next
#define info(P) P->info

using namespace std;

typedef int infotype;
typedef struct elmlist *address;

struct elmlist
{
    infotype info;
    address next;
};
struct List
{
    address first;
};

void createList_1305220010(List &L);

address allocate_1305220010(infotype x);

void insertFirst_1305220010(List &L, address P);

void printInfo_1305220010(List L);

#endif // LIST_H_INCLUDED
