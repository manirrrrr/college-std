#ifndef AKUN_H_INCLUDED
#define AKUN_H_INCLUDED

#define Nil NULL
#define info(P) (P)->info
#define next(P) (P)->next
#define prev(P) (P)->prev
#define first(L) ((L).first)
#define last(L) ((L).last)

using namespace std;
#include <string>

typedef User infotype;
typedef struct elmlist *address;

struct User {
    string username;
    string password;
};

struct elmlist {
    User info;
    address next;
    address prev;
};

struct list {
    address first;
    address last;
};

address createNewElm(infotype akun);

void insertLast(address p, list &L);

address findAkun(string username, list L);

void signUp(infotype akun, list &L);

void deleteFirst(list &L, address p);

void deleteAfter(list &L, address q, address p);

void deleteLast(list &L, address p);

void removeAkun(string username, list &L);

#endif // AKUN_H_INCLUDED