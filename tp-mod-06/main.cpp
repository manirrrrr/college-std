#include <iostream>
#include "DLL.h"

using namespace std;

int main()
{
    list L1, L2, L3;

    first(L1) = NULL;
    first(L2) = NULL;
    first(L3) = NULL;

    address lagu1, lagu2, lagu3, lagu4, lagu5, lagu6;
    lagu1 = createNewElmt_1305220010("Kereta Malam");
    lagu2 = createNewElmt_1305220010("Cruel Summer");
    lagu3 = createNewElmt_1305220010("Satu-Satu");
    lagu4 = createNewElmt_1305220010("Greedy");
    lagu5 = createNewElmt_1305220010("Fix You");
    lagu6 = createNewElmt_1305220010("Tawa");

    cout << "Masukkan lagu: " << info(lagu1) << endl;
    insertLast_1305220010(L1, lagu1);

    cout << "Masukkan lagu: " << info(lagu2) << endl;
    insertFirst_1305220010(L1, lagu2);

    cout << "Masukkan lagu: " << info(lagu3) << endl;
    insertLast_1305220010(L1, lagu3);

    cout << "Masukkan lagu: " << info(lagu4) << endl;
    insertAfter_1305220010(L1, lagu2, lagu4);

    cout << "Masukkan lagu: " << info(lagu5) << endl;
    insertFirst_1305220010(L2, lagu5);

    cout << "Masukkan lagu: " << info(lagu6) << endl;
    insertFirst_1305220010(L2, lagu6);

    // Hapus lagu
    removeLagu_1305220010("Greedy", L1);

    concat_130520010(L1, L2, L3);

    // Tampilkan list
    address current = first(L3);
    while (current != NULL)
    {
        if (next(current) == NULL) {
            cout << info(current) << endl;
        } else {
            cout << info(current) << ", ";
        }
        current = next(current);
    }

    return 0;
}
