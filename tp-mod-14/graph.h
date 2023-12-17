#ifndef GRAPH_H_INCLUDED
#define GRAPH_H_INCLUDED

#include <iostream>
using namespace std;

#define firstVertex(V) (V).firstVertex
#define firstEdge(E) (E).firstEdge
#define vertexId(P) (P)->id
#define nextVertex(P) (P)->nextVertex
#define nextEdge(P) (P)->nextEdge
#define vertex1(P) (P)->vertex1
#define vertex2(P) (P)->vertex2

typedef struct vertex *adrVertext;
typedef struct edge *adrEdge;

struct vertex {
    char id;
    adrVertext nextVertex;
};

struct edge {
    adrVertext vertex1;
    adrVertext vertex2;
    adrEdge nextEdge;
};

struct listOfEdge
{
    adrEdge firstEdge;
};

struct graph {
    adrVertext firstVertex;
};

void createVertex_1305220010(char newVertexID, adrVertext &v);
void createEdge_1305220010(adrVertext v1, adrVertext v2, adrEdge &e);
void initGraph_1305220010(graph &G);
void initEdge_1305220010(listOfEdge &E);
void addVertex_1305220010(graph &G, char newVertexID);
void addEdge_1305220010(graph G, listOfEdge &E, char vertex1ID, char vertex2ID);
adrVertext findVertex_1305220010(graph G, char vertexID);
void buildGraph_1305220010(graph &G);
void buildEdge_1305220010(graph G, listOfEdge &E);

#endif // GRAPH_H_INCLUDED