#include <iostream>
#include "sll.h"

using namespace std;

int main()
{
    list L;
    int opsi;

    createList_1305220010(L);

    opsi = selectMenu_1305220010();

    while (opsi != 0)
    {
        if (opsi == 1)
        {
            int n = 0;
            cout << "Jumlah data yang ditambahkan: ";
            cin >> n;

            for (int i = 0; i < n; i++)
            {
                char x;
                cout << "Masukkan data baru: ";
                cin >> x;

                address p = createNewElement_1305220010(x);
                insertLast_1305220010(L, p);
            }
        }
        else if (opsi == 2)
        {
            showAllData_1305220010(L);
        }
        else if (opsi == 3)
        {
            float value = vocalPersentage_1305220010(L);
            cout << "Persentase huruf vokal dalam list: " << value << "%" << endl;
        }
        else if (opsi == 4)
        {
            int k = 0;
            cout << "Masukkan data ke-k terakhir: ";
            cin >> k;
            showLastK_1305220010(L, k);
        }
        else
        {
            cout << "Opsi tidak valid." << endl;
        }
        cout << endl;
        opsi = selectMenu_1305220010();
    }

    cout << "ANDA TELAH KELUAR DARI PROGRAM" << endl;
    return 0;
}
