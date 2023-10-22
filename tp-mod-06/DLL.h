#ifndef DLL_H_INCLUDED
#define DLL_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

#define next(P) P->next
#define prev(P) P->prev
#define info(P) P->info
#define first(L) (L).first
#define last(L) (L).last

typedef string infotype;
typedef struct elmList *address;

struct elmList {
    infotype info;
    address next;
    address prev;
};

struct list {
    address first;
    address last;
};

bool isEmpty_1305220010(list L);
address createNewElmt_1305220010(infotype X);
void insertFirst_1305220010(list &L, address P);
void insertAfter_1305220010(list &L, address &Prec, address &P);
void insertLast_1305220010(list &L, address P);
void deleteFirst_1305220010(list &L, address P);
void deleteAfter_1305220010(list &L, address &Prec, address P);
void deleteLast_1305220010(list &L, address P);
void concat_130520010(list L1, list L2, list &L3);
address findLagu_1305220010(string Judul, list L);
void removeLagu_1305220010(string Judul, list &L);

#endif // DLL_H_INCLUDED
