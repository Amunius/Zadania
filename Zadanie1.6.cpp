//Program wypisujący najdłuższy wyraz z tekstu

#include <iostream>

using namespace std;

int main()
{
    string Tekst = "To jest przykladowe zdanie";
    int PierwszyZnakNajdluzszegoSlowa, PierwszyZnakOstatniegoSlowa, DlugoscNajdluzszegoSlowa = 0;

    for (int i = 0; i < Tekst.size(); i++)
    {
        //Wykona się tylko podczas pierwszego przebiegu pętli
        if(i == 0)
        {
            PierwszyZnakNajdluzszegoSlowa = i;
            PierwszyZnakOstatniegoSlowa = i;
        }

        //Wykona się, gdy pętla będzie na końcu wyrazu i jeżeli ten wyraz będzie dotychczas najdłuższym
        if(Tekst[i] == 32 && Tekst[i - 1] != 32 && i - PierwszyZnakOstatniegoSlowa > DlugoscNajdluzszegoSlowa || i == Tekst.size() - 1 && Tekst[i - 1] != 32 && i - PierwszyZnakOstatniegoSlowa > DlugoscNajdluzszegoSlowa)
        {
            PierwszyZnakNajdluzszegoSlowa = PierwszyZnakOstatniegoSlowa;
            DlugoscNajdluzszegoSlowa = i - PierwszyZnakOstatniegoSlowa;
        }

        //Wykona się podczas tego, gdy pętla dojdzie do jakiegoś nowego wyrazu
        if(Tekst[i] != 32 && Tekst[i - 1] == 32)
        {
            PierwszyZnakOstatniegoSlowa = i;
        }
    }
    
    cout << "Najdluzszym wyrazem jest wyraz: ";

    for (int i = PierwszyZnakNajdluzszegoSlowa; i <= PierwszyZnakNajdluzszegoSlowa + DlugoscNajdluzszegoSlowa; i++)
    {
        cout << Tekst[i];
    }

    return 0;
}