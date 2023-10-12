#include <iostream>
#include "auth.h"

using namespace std;

int main()
{
    list L; // Create a List

    // Create and insert some accounts
    infotype akun1, akun2, akun3;
    akun1.username = "user1";
    akun1.password = "password1";
    akun2.username = "user2";
    akun2.password = "password2";
    akun3.username = "user3";
    akun3.password = "password3";

    address p1, p2, p3;
    p1 = createNewElm(akun1);
    p2 = createNewElm(akun2);
    p3 = createNewElm(akun3);

    insertLast(p1, L);
    insertLast(p2, L);
    insertLast(p3, L);

    // Remove an account
    string usernameToRemove = "user2";
    removeAkun(usernameToRemove, L);

    // Sign up a new account
    infotype newAkun;
    newAkun.username = "user4";
    signUp(newAkun, L);

    // Display the list
    address current = L.first;
    while (current != nullptr)
    {
        cout << "Username: " << info(current).username << endl;
        current = next(current);
    }

    return 0;
}
