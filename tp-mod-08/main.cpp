#include "doubleCircular.h"

int main()
{
    List L;
    createList_1305220010(L);

    insertLast_1305220010(L, alokasi_1305220010(5));
    insertLast_1305220010(L, alokasi_1305220010(15));
    insertLast_1305220010(L, alokasi_1305220010(25));
    insertLast_1305220010(L, alokasi_1305220010(35));
    insertLast_1305220010(L, alokasi_1305220010(45));
    insertLast_1305220010(L, alokasi_1305220010(55));
    insertLast_1305220010(L, alokasi_1305220010(65));
    insertLast_1305220010(L, alokasi_1305220010(75));
    insertLast_1305220010(L, alokasi_1305220010(85));

    printInfo_1305220010(L);

    deleteByValue_1305220010(L, 5);
    deleteByValue_1305220010(L, 100);
    deleteByValue_1305220010(L, 45);
    deleteByValue_1305220010(L, 85);

    printInfo_1305220010(L);

    return 0;
}