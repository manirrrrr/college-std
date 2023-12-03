#include <iostream>
#include "flight.h"

int main()
{
    ListJadwal L;
    int n;

    createListJadwal_1305220010(L);
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        infotype X;
        cin >> X.Kode >> X.Jenis >> X.Tanggal >> X.Waktu >> X.Asal >> X.Tujuan >> X.Kapasitas;
        adr_jadwalP P = createElemenJadwal_1305220010(X);
        insertLastJ_1305220010(L, P);
    }

    showJadwal_1305220010(L);

    searchJ_1305220010(L, "Surabaya", "Malang", "09-12-2022");

    return 0;
}