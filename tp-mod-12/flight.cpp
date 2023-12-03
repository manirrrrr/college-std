#include <iostream>
#include "flight.h"

void createListJadwal_1305220010(ListJadwal &L)
{
    first(L) = NULL;
}

adr_jadwalP createElemenJadwal_1305220010(infotype X)
{
    adr_jadwalP P = new elemenJadwal;
    info(P) = X;
    next(P) = NULL;
    return P;
}

void insertLastJ_1305220010(ListJadwal &L, adr_jadwalP P)
{
    adr_jadwalP Q = first(L);
    if (Q == NULL)
    {
        first(L) = P;
    }
    else
    {
        while (next(Q) != NULL)
        {
            Q = next(Q);
        }
        next(Q) = P;
    }
}

void showJadwal_1305220010(ListJadwal L)
{
    adr_jadwalP P = first(L);
    if (P == NULL)
    {
        cout << "Tidak ada jadwal penerbangan" << endl;
    }
    else
    {
        cout << "Kode | Jenis | Tanggal | Waktu | Asal | Tujuan | Kapasitas" << endl;
        while (P != NULL)
        {
            cout << info(P).Kode << " | " << info(P).Jenis << " | " << info(P).Tanggal << " | " << info(P).Waktu << " | " << info(P).Asal << " | " << info(P).Tujuan << " | " << info(P).Kapasitas << endl;
            P = next(P);
        }
    }
}

void deleteFirstJ_1305220010(ListJadwal &L, adr_jadwalP &P)
{
    if (first(L) == NULL)
    {
        cout << "Tidak ada jadwal penerbangan" << endl;
    }
    else if (next(first(L)) == NULL)
    {
        P = first(L);
        first(L) = NULL;
    }
    else
    {
        P = first(L);
        first(L) = next(P);
        next(P) = NULL;
    }
}

adr_jadwalP searchJ_1305220010(ListJadwal L, string dari, string ke, string tanggal)
{
    adr_jadwalP P = first(L);
    while (P != NULL)
    {
        if (info(P).Asal == dari && info(P).Tujuan == ke && info(P).Tanggal == tanggal)
        {
            return P;
        }
        P = next(P);
    }
    return NULL;
}
