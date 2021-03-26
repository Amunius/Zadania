//Program który wypisuje litery na krańcach wyrazów

#include <iostream>

using namespace std;

int main()
{
    //Tekst
    string Tekst = "Ala ma kota a Ola ma psa";

    //Dzięki tej zmiennej w środkach wyrazów program wypisuje jeden myślnik, a nie kilka
    int NumerOstatniegoWypisanegoZnaku;

    for (int i = 0; i < Tekst.size(); i++)
    {
        //Wykona się tylko podczas pierwszego przebiegu pętli jeżeli Tekst[i] nie będzie spacją
        if(i == 0 && Tekst[i] != 32)
        {
            cout << Tekst[i];
            NumerOstatniegoWypisanegoZnaku = i;
        }

        //Wykona się tylko podczas ostatniego przebiegu pętli jeżeli Tekst[i] nie będzie spacją
        if(i == Tekst.size() - 1 && Tekst[i] != 32)
        {
            cout << Tekst[i];
            NumerOstatniegoWypisanegoZnaku = i;
        }

        //Wypisuje spacje po wyrazach
        if (Tekst[i] == 32 && Tekst[i - 1] != 32)
        {
            cout << " ";
        }

        //Wypisuje pierwsze i ostatnie litery wyrazu
        if (Tekst[i] != 32 && Tekst[i - 1] == 32 || Tekst[i] != 32 && Tekst[i + 1] == 32)
        {
           cout << Tekst[i];
           NumerOstatniegoWypisanegoZnaku = i;
        }

        //Wypisuje myślnik w środkach wyrazów
        if (Tekst[i] != 32 && NumerOstatniegoWypisanegoZnaku == i - 1)
        {
            cout << "-";
        }
    }
    
    return 0;
}
