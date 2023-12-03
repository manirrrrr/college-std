#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;

#define TopS(S) S.TopS
#define Top(S) S.Top
#define info(S) S->info
#define next(S) S->next
#define prev(S) S->prev

const int MAXSTACK = 10;

typedef string infotype;
typedef struct elmList *address;

struct elmList {
    infotype info;
    address next;
    address prev;
};

struct stack {
    address TopS;
    int Top;
};

void createStack(stack &S);
address createElmList(infotype P);
void push(stack &S, address P);
void pop(stack &S, address P);
void printInfo(stack S);

void stringToStack(stack &S, infotype str);

int getPriority(infotype c);
bool isOperator(infotype c);

void infixToPostfix(stack &S);
void infixToPrefix(stack &S);

void prefixToValue(stack S);
void postfixToValue(stack S);

#endif // STACK_H_INCLUDED