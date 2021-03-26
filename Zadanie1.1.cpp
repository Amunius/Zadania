//Program, który liczy małe i duże litery w tekście

#include <iostream>

using namespace std;

int main()
{
    string Tekst;
    int DuzeLitery = 0, MaleLitery = 0;

    cin >> Tekst;

    for (int i = 0; i < Tekst.size(); i++)
    {
        if(Tekst[i] <= 90 && Tekst[i] >= 65)
        {
            DuzeLitery++;
            continue;
        }
        
        if(Tekst[i] <= 122 && Tekst[i] >= 97)
        {
            MaleLitery++;
            continue;
        }
    }

    cout << "W tym tekscie jest " << DuzeLitery << " duzych liter i " << MaleLitery << " malych liter";

    return 0;
}