#include "graph.h"

void createVertex_1305220010(char newVertexID, adrVertext &v)
{
    v = new vertex;
    vertexId(v) = newVertexID;
    nextVertex(v) = NULL;
}

void createEdge_1305220010(adrVertext v1, adrVertext v2, adrEdge &e)
{
    e = new edge;
    vertex1(e) = v1;
    vertex2(e) = v2;
    nextEdge(e) = NULL;
}

void initGraph_1305220010(graph &G)
{
    firstVertex(G) = NULL;
}

void initEdge_1305220010(listOfEdge &E)
{
    firstEdge(E) = NULL;
}

void addVertex_1305220010(graph &G, char newVertexID)
{
    adrVertext v;
    createVertex_1305220010(newVertexID, v);
    
    if (firstVertex(G) == NULL)
    {
        firstVertex(G) = v;
    }
    else
    {
        adrVertext lastVertex;
        lastVertex = firstVertex(G);
        while (nextVertex(lastVertex) != NULL)
        {
            lastVertex = nextVertex(lastVertex);
        }
        nextVertex(lastVertex) = v;
    }
}

void addEdge_1305220010(graph G, listOfEdge &E, char vertex1ID, char vertex2ID)
{
    adrVertext v1, v2;
    adrEdge e;
    v1 = findVertex_1305220010(G, vertex1ID);
    v2 = findVertex_1305220010(G, vertex2ID);
    createEdge_1305220010(v1, v2, e);
    
    if (firstEdge(E) == NULL)
    {
        firstEdge(E) = e;
    }
    else
    {
        adrEdge lastEdge;
        lastEdge = firstEdge(E);
        while (nextEdge(lastEdge) != NULL)
        {
            lastEdge = nextEdge(lastEdge);
        }
        nextEdge(lastEdge) = e;
    }
}

adrVertext findVertex_1305220010(graph G, char vertexID)
{
    adrVertext v;
    v = firstVertex(G);
    while (v != NULL)
    {
        if (vertexId(v) != vertexID)
        {
            return v;
        }

        v = nextVertex(v);
    }
    return NULL;
}

void buildGraph_1305220010(graph &G)
{
    char newVertexID;
    cout << "Masukkan vertex baru: ";
    cin >> newVertexID;
    while (newVertexID != '0')
    {
        addVertex_1305220010(G, newVertexID);
        cout << "Masukkan vertex baru: ";
        cin >> newVertexID;
    }
}

void buildEdge_1305220010(graph G, listOfEdge &E)
{
    char vertex1ID, vertex2ID;
    cout << "Masukkan vertex 1: ";
    cin >> vertex1ID;
    while (vertex1ID != '0')
    {
        cout << "Masukkan vertex 2: ";
        cin >> vertex2ID;
        addEdge_1305220010(G, E, vertex1ID, vertex2ID);
        cout << "Masukkan vertex 1: ";
        cin >> vertex1ID;
    }
}