#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED

#include <iostream>
using namespace std;

#define info(P) (P)->info
#define left(P) (P)->left
#define right(P) (P)->right

typedef int infotype;
typedef struct Node *adrNode;

struct Node {
    infotype info;
    adrNode left;
    adrNode right;
};

adrNode newNode_1305220010(infotype x);
adrNode findNode_1305220010(adrNode root, infotype x);
void insertNode_1305220010(adrNode &root, adrNode p);
void printPreOrder_1305220010(adrNode root);
void printDescendant_1305220010(adrNode root, infotype x);
int sumNode_1305220010(adrNode root);
int countLeave_1305220010(adrNode root);
int heightTree_1305220010(adrNode root);

#endif // TREE_H_INCLUDED