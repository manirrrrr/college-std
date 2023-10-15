#ifndef SLL_H_INCLUDED
#define SLL_H_INCLUDED

#include <iostream>
#define Nil NULL
#define first(L) L.first
#define next(P) P->next
#define info(P) P->info

using namespace std;

typedef char infotype;
typedef struct elmlist *address;

struct elmlist {
    infotype info;
    address next;
};

struct list {
    address first;
};

void createList_1305220010(list &L);
address createNewElement_1305220010(infotype x);
void insertLast_1305220010(list &L, address p);
void showAllData_1305220010(list L);
float vocalPersentage_1305220010(list L);
void showLastK_1305220010(list L, int k);
int selectMenu_1305220010();

#endif // SLL_H_INCLUDED
