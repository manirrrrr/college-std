#include <iostream>
#include "auth.h"

using namespace std;

int main()
{
    list L; // Create a List

    first(L) = Nil;

    // Create and insert some accounts
    infotype akun1, akun2, akun3, akun4;
    akun1.username = "user1";
    akun1.password = "password1";
    akun2.username = "user2";
    akun2.password = "password2";
    akun3.username = "user3";
    akun3.password = "password3";
    akun4.username = "user4";
    akun4.password = "password3";

    cout << "Daftar username: " << akun1.username << endl;
    signUp(akun1, L);

    cout << "Daftar username: " << akun2.username << endl;
    signUp(akun2, L);

    cout << "Daftar username: " << akun3.username << endl;
    signUp(akun3, L);

    cout << "Daftar username: " << akun4.username << endl;
    signUp(akun4, L);

    // Remove an account
    removeAkun("user2", L);
    removeAkun("user4", L);

    // Display the list
    address current = first(L);
    while (current != Nil)
    {
        cout << "Username: " << info(current).username << endl;
        current = next(current);
    }

    return 0;
}
