#include <iostream>
using namespace std;

float metry;

float ile_cali(float m)
{
    float cale = m * 39.37;

}

int main()
{
    cout << "Podaj ile metrow: ";
    cin >> metry;

    cout << "W calach: " << ile_cali(metry); << endl;
}

