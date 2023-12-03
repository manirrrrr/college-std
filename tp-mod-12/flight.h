#ifndef FLIGHT_H_INCLUDED
#define FLIGHT_H_INCLUDED

using namespace std;

#define Nil NULL
#define info(P) P->info
#define next(P) P->next
#define first(Q) (Q).first

typedef struct elemenJadwal *adr_jadwalP;
typedef struct jadwalPenerbangan infotype;

struct jadwalPenerbangan {
    string Kode;
    string Jenis;
    string Tanggal;
    string Waktu;
    string Asal;
    string Tujuan;
    int Kapasitas;
};

struct elemenJadwal {
    infotype info;
    adr_jadwalP next;
};

struct ListJadwal {
    adr_jadwalP first;
};

void createListJadwal_1305220010(ListJadwal &L);
adr_jadwalP createElemenJadwal_1305220010(infotype X);
void insertLastJ_1305220010(ListJadwal &L, adr_jadwalP P);
void showJadwal_1305220010(ListJadwal L);
void deleteFirstJ_1305220010(ListJadwal &L, adr_jadwalP &P);
adr_jadwalP searchJ_1305220010(ListJadwal L, string dari, string ke, string tanggal);

#endif // FLIGHT_H_INCLUDED
