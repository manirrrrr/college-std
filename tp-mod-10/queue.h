#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#define Nil NULL
#define info(P) P->info
#define next(P) P->next
#define head(Q) (Q).head
#define tail(Q) (Q).tail

using namespace std;

typedef bool boolean;
typedef int infotype;
typedef struct elmQ *address;

struct elmQ
{
    infotype info;
    address next;
};

struct queue {
    address head, tail;
}

address alokasi_1305220010(infotype info);
address findElmt_1305220010(queue Q, infotype num);
bool queueEmpty_1305220010(queue Q);
void createQueue_1305220010(queue &Q);
void dealokasi_1305220010(address P);
void enQueue_1305220010(queue &Q, address P);
void deQueue_1305220010(queue &Q, address P);
void printInfo_1305220010(queue Q);
int nbOfElm_1305220010(queue Q);

void ganjilGenap_1305220010(queue &Q, queue &QGanjil, queue &QGenap);

#endif //QUEUE_H_INCLUDED