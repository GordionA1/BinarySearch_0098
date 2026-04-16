#include <iostream>
using namespace std;

int elemen[10];
int nPanjang;
int x;

void input ()
{
    while (true)
    {
        cout << "Masukkan panjang elemen array (maksimal 10): ";
        cin >> nPanjang;
        if (nPanjang <= 10)
            break;
        else
            cout << "\n[!]Panjang elemen array tidak boleh lebih dari 10.coba lagi!\n";
    }
}