//Program który zmienia wielkość liter

#include <iostream>

using namespace std;

int main()
{
    string Tekst;

    cin >> Tekst;

    for(int i = 0; i< Tekst.size(); i++)
    {
        //Wykona się tylko dla wielkich liter
        if(Tekst[i] >= 65 && Tekst[i] <= 90)
        {
            cout << char(Tekst[i] + 32);
            continue;
        }

        //Wykona się tylko dla małych liter
        if(Tekst[i] >= 97 && Tekst[i] <= 122)
        {
            cout << char(Tekst[i] - 32);
            continue;
        }

        cout << Tekst[i];
    }

    return 0;
}