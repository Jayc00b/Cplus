#include <iostream>
#include <fstream>
using namespace std;


string imie, nazwisko;
int telefon;

int main()
{
    cout << "Podaj imie: ";
    cin >> imie;
    cout << "Podaj nazwisko: ";
    cin >> nazwisko;
    cout << "Podaj numer telefonu: ";
    cin >> telefon;

    fstream plik;
    plik.open("wizytowka.txt", ios::in);

    if (plik.good() == false)
    {
        cout << "Plik nie istnieje!"
        exit(0)
    }
    plik<<imie<<endl;
    plik<<nazwisko<<endl;
    plik<<telefon<<endl;

    plik.close();
    return 0;
}

