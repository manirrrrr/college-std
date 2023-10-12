#include <iostream>
#include "list.h"

using namespace std;

address alokasi(infotype info) {
    address p;
    p = new elmlist;
    info(p) = info;
    next(p) = Nil;
    return p;
}

bool listEmpty(list L) {
    
}

address searchElmt(list L, infotype num) {
    
}

void createList(list &L) {
    first(L) = Nil;
}

void dealokasi(address P) {
    
}

void insertFirst(list &L, address P) {
    if (first(L) == Nil){
        first(L) = P;
    } else{
        next(P) = first(L);
        first(L) = P;
    }
}

void insertAfter(list &L, address P, address Prev) {    
    
}

void insertLast(list &L, address P) {
    
}

void delFirst(list &L, address P) {
        
}

void delLast(list &L, address P) {
        
}

void delAfter(list &L, address P, address Prev) {
    
}

void printInfo(list L) {
    address p;
    p = first(L);
    while (p != Nil){
        cout << info(p) << " ";
        p = next(p);
    }   
}

void printEven(list L) {
    
}

void printOdd(list L) {
    
}

int nbList(list L) {
    
}

address searchMin(list L) {
    
}

address searchMax(list L) {
    
}

void maximumSort(list L) {
    
}

void minimumSort(list L) {
    
}