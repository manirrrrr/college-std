#include <iostream>
#include "sll.h"

using namespace std;

void createList_1305220010(list &L)
{
    first(L) = Nil;
}

address createNewElement_1305220010(infotype x)
{
    address p;
    p = new elmlist;
    info(p) = x;
    next(p) = Nil;
    return p;
}

void insertLast_1305220010(list &L, address p)
{
    address q = first(L);
    if (q != Nil) {
        while (next(q) != Nil) {
            q = next(q);
        }
        next(q) = p;
    } else {
        first(L) = p;
    }
}

void showAllData_1305220010(list L)
{
    address p = first(L);
    if (p == Nil) {
        cout << "List kosong";
    } else {
        while (p != Nil) {
            if (next(p) == Nil) {
                cout << info(p);
            } else {
                cout << info(p) << ", ";
            }
            p = next(p);
        }
    }
    cout << endl;
}

float vocalPersentage_1305220010(list L)
{
    address p = first(L);
    float totVocal = 0;
    float percent = 0;
    float i = 0;
    while (p != Nil) {
        char c = info(p);
        if (c == 'A' || c == 'a' || c == 'E' || c == 'e' || c == 'I' || c == 'i' || c == 'O' || c == 'o' || c == 'U' || c == 'u') {
            totVocal = totVocal + 1;
        }
        i = i + 1;
        p = next(p);
    }

    if (i > 0) {
         percent = (totVocal / i) * 100;
    }
    return percent;
}

void showLastK_1305220010(list L, int k)
{
    address p = first(L);
    address q = first(L);
    int i = 0;
    int target = 0;

    while (p != Nil) {
        i = i + 1;
        p = next(p);
    }

    if (i >= k) {
        target = i - k;
        i = 0;
        while (q != Nil) {
            if (i == target) {
                cout << info(q) << endl;
            }
            i = i + 1;
            q = next(q);
        }
    } else {
        cout << k << "k melebihi panjang list" << endl;
    }
}

int selectMenu_1305220010()
{
    cout << "======MENU======" << endl;
    cout << "1. Menambah N data baru" << endl;
    cout << "2. Menampilkan semua data" << endl;
    cout << "3. Persentase huruf vokal" << endl;
    cout << "4. Data ke-k terakhir" << endl;
    cout << "0. Keluar" << endl;
    cout << "Pilih opsi: ";

    int input = 0;
    cin >> input;

    return input;
}
