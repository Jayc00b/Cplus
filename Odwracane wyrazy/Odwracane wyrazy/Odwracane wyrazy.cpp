#include <iostream>
#include <string>
using namespace std;

int main()
{
    string napis;
    cout << "Podaj wyraz do odwrocenia";
    getline(cin,napis);

    int dlugosc = napis.length();

    for (int i = dlugosc - 1; i >= 0; i--)
    {
        cout << napis[i];
    }
}
