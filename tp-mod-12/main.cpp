#include <iostream>
#include "flight.h"

int main()
{
    ListJadwal L;
    int n;
    adr_jadwalP P;

    createListJadwal_1305220010(L);
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        infotype X;
        cin >> X.Kode >> X.Jenis >> X.Tanggal >> X.Waktu >> X.Asal >> X.Tujuan >> X.Kapasitas;
        P = createElemenJadwal_1305220010(X);
        insertLastJ_1305220010(L, P);
    }

    showJadwal_1305220010(L);

    cout << "Mencari jadwal penerbangan..." << endl;
    P = searchJ_1305220010(L, "Surabaya", "Malang", "09-12-2022");
    cout << "Kode | Jenis | Tanggal | Waktu | Asal | Tujuan | Kapasitas" << endl;
    cout << info(P).Kode << " | " << info(P).Jenis << " | " << info(P).Tanggal << " | " << info(P).Waktu << " | " << info(P).Asal << " | " << info(P).Tujuan << " | " << info(P).Kapasitas << endl;

    return 0;
}
