#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    cout << "Witaj! Pomyślałem sobie o liczbie między 1 a 100." << endl;
    srand(time(NULL));
    int liczba = rand() % 100 + 1;
    int strzal;
    int ile_prob = 0;

    while (true) {
        ile_prob++;
        cout << "Zgadnij jaką: (to twoja " << ile_prob << " próba) ";
        cin >> strzal;

        if (strzal == liczba) {
            cout << "Brawo! Zgadłeś!" << endl;
            break;
        }
        else if (strzal > liczba) {
            cout << "Szukaj mniejszej liczby." << endl;
        }
        else {
            cout << "Szukaj większej liczby." << endl;
        }
    }

    return 0;
}
