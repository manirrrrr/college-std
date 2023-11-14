#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <iostream>
using namespace std;

#define Top(S) S.top
#define info(S) S.info

const int MAXSTACK = 10;

typedef char infotype;
struct stack {
    infotype info[MAXSTACK];
    int top;
};

void createStack(stack &S);
bool isEmpty(stack S);
bool isFull(stack S);
void push(stack &S, infotype P);
void pop(stack &S, infotype &P);
void printInfo(stack S);

void stringToStack(stack &S, string str);
void infixToPostfix(stack S, stack &SPost);
void infixToPrefix(stack S, stack &SPre);

void infixToValue(stack S);
void prefixToValue(stack S);
void postfixToValue(stack S);

#endif // STACK_H_INCLUDED