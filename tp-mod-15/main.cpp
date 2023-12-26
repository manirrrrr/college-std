#include <iostream>
#include "tree.h"

int main()
{
    int x[9] = {5, 3, 9, 10, 4, 7, 1, 8, 6};
    
    cout << "=======================================" << endl;

    for (int i = 0; i < 9; i++)
    {
        cout << x[i] << " ";
    }
    cout << endl;

    adrNode root = NULL;
    for (int i = 0; i < 9; i++)
    {
        adrNode p = newNode_1305220010(x[i]);
        insertNode_1305220010(root, p);
    }
    cout << endl;

    cout << "Pre Order: ";
    printPreOrder_1305220010(root);
    cout << endl;

    cout << "Descendant of Node 9: ";
    printDescendant_1305220010(root, 9);
    cout << endl;

    cout << "Sum of BST Info: " << sumNode_1305220010(root) << endl;
    cout << "Number of Leaves: " << countLeave_1305220010(root) << endl;
    cout << "Height of Tree: " << heightTree_1305220010(root) << endl;

    cout << "=======================================" << endl;

    return 0;
}
