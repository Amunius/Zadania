//Program który zmienia samogłoski w tekście na myślniki

#include <iostream>

using namespace std;

int main()
{
    //Tablica przechowująca numery znaków ASCII samogłosek
    int SamogloskiWKodzieASCII[12] = {65, 69, 73, 79, 85, 89, 97, 101, 105, 111, 117, 121};

    //Przypisywanie długości tablicy do zmiennej DlugoscTablicy
    int DlugoscTablicy = sizeof(SamogloskiWKodzieASCII) / sizeof(int);

    bool CzySamogloska;
    
    string Tekst;

    cin >> Tekst;

    for (int i = 0; i < Tekst.size(); i++)
    {
        CzySamogloska = false;

        for(int j = 0; j < DlugoscTablicy; j++)
        {
            if(Tekst[i] == SamogloskiWKodzieASCII[j])
            {
                cout << "-";
                CzySamogloska = true;
                break;
            }
        }

        if(!CzySamogloska)
        {
            cout << Tekst[i];
        }
    }
    
    return 0;
}