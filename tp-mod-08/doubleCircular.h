#ifndef DOUBLECIRCULAR_H_INCLUDED
#define DOUBLECIRCULAR_H_INCLUDED

#include <iostream>
using namespace std;

#define info(P) P->info
#define next(P) P->next
#define prev(P) P->prev
#define first(L) (L).first
#define last(L) (L).last

typedef int infotype;
typedef struct elmList *address;

struct elmList
{
    infotype info;
    address next;
    address prev;
};

struct List
{
    address first;
    address last;
};

void createList_1305220010(List &L);
address alokasi_1305220010(infotype x);
void dealokasi_1305220010(address &P);
void insertFirst_1305220010(List &L, address P);
void insertAfter_1305220010(List &L, address Prec, address P);
void insertLast_1305220010(List &L, address P);
address findElm_1305220010(List L, infotype x);
void deleteFirst_1305220010(List &L, address &P);
void deleteAfter_1305220010(List &L, address Prec, address &P);
void deleteLast_1305220010(List &L, address &P);
void printInfo_1305220010(List L);
void deleteByValue_1305220010(List &L, infotype x);
void reverseList_1305220010(List L, List &L2);

#endif // DOUBLECIRCULAR_H_INCLUDED
