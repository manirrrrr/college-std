#include <iostream>
#include "graph.h"

int main()
{
    graph G;
    listOfEdge E;

    initGraph_1305220010(G);
    initEdge_1305220010(E);

    buildGraph_1305220010(G);
    buildEdge_1305220010(G, E);
    
    return 0;
}
