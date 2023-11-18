#include <iostream>
#include "queue.h"

int main()
{
    queue Q, QGenap, QGanjil;

    createQueue_1305220010(Q);
    createQueue_1305220010(QGenap);
    createQueue_1305220010(QGanjil);

    address P;
    for (int i = 2; i <= 11; i++)
    {
        P = alokasi_1305220010(i);
        enQueue_1305220010(Q, P);
    }

    cout << "Kondisi awal" << endl;
    printInfo_1305220010(Q);

    ganjilGenap_1305220010(Q, QGanjil, QGenap);
    cout << "Kondisi akhir" << endl;
    cout << "Queue Utama" << endl;
    printInfo_1305220010(Q);

    cout << "Queue Ganjil" << endl;
    printInfo_1305220010(QGanjil);

    cout << "Queue Genap" << endl;
    printInfo_1305220010(QGenap);

    return 0;
}