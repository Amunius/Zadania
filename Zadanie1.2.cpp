//Program który wypisuje tekst pomijając daną liczbę początkowych i końcowych znaków

#include <iostream>

using namespace std;

int main()
{
    string Tekst;
    int k;

    cin >> Tekst >> k;

    if(k < Tekst.size() / 2)
    {
        for (int i = k; i < Tekst.size() - k; i++)
        {
            cout << Tekst[i];
        }
    }
    else
    {
        cout << "k jest za duze";
    }
    
    return 0;
}