﻿#include <iostream>

using namespace std;

string login, haslo;

int main() {

    cout << "Podaj login:  " << endl;
    cin >> login;
    cout << "Podaj hasło: ";
    cin >> haslo;

    if ((login == "admin") && (haslo == "szarlotka"))
    {
        cout << "Udalo sie zalogowac!";
    }
    else
    {
        cout << "Nie udało się zalogować!";
    }

    return 0;
}