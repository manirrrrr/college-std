#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <iostream>
using namespace std;

#define Top(S) S.top
#define info(S) S.info

typedef char infotype;

struct stack {
    infotype info[15];
    int top;
};

void createStack_1305220010(stack &S);
bool isEmpty_1305220010(stack S);
bool isFull_1305220010(stack S);
void push_1305220010(stack &S, infotype x);
infotype pop_1305220010(stack &S);
void printInfo_1305220010(stack S);

#endif // STACK_H_INCLUDED
