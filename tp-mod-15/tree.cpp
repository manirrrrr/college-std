#include "tree.h"

adrNode newNode_1305220010(infotype x)
{
    adrNode p = new Node;
    info(p) = x;
    left(p) = NULL;
    right(p) = NULL;
    return p;
}

adrNode findNode_1305220010(adrNode root, infotype x)
{
    if (root == NULL)
        return NULL;
    else if (info(root) == x)
        return root;
    else if (info(root) < x)
        return findNode_1305220010(right(root), x);
    else
        return findNode_1305220010(left(root), x);
}

void insertNode_1305220010(adrNode &root, adrNode p)
{
    if (root == NULL)
        root = p;
    else if (info(root) < info(p))
        insertNode_1305220010(right(root), p);
    else
        insertNode_1305220010(left(root), p);
}

void printPreOrder_1305220010(adrNode root)
{
    if (root != NULL)
    {
        cout << info(root) << " ";
        printPreOrder_1305220010(left(root));
        printPreOrder_1305220010(right(root));
    }
}

void printDescendant_1305220010(adrNode root, infotype x)
{
    adrNode p = findNode_1305220010(root, x);
    if (p != NULL)
    {
        printPreOrder_1305220010(left(p));
        printPreOrder_1305220010(right(p));
    }
}

int sumNode_1305220010(adrNode root)
{
    if (root == NULL)
        return 0;
    else
        return info(root) + sumNode_1305220010(left(root)) + sumNode_1305220010(right(root));
}

int countLeave_1305220010(adrNode root)
{
    if (root == NULL)
        return 0;
    else if (left(root) == NULL && right(root) == NULL)
        return 1;
    else
        return countLeave_1305220010(left(root)) + countLeave_1305220010(right(root));
}

int heightTree_1305220010(adrNode root)
{
    if (root == NULL)
        return -1;
    else
    {
        int leftHeight = heightTree_1305220010(left(root));
        int rightHeight = heightTree_1305220010(right(root));
        if (leftHeight > rightHeight)
            return leftHeight + 1;
        else
            return rightHeight + 1;
    }
}