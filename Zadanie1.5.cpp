//Program, który wypisuje miejsca występowania spacji w tekście

#include <iostream>

using namespace std;

int main()
{
    string Tekst = "Alicja w krainie czarow";

    for(int i = 0; i < Tekst.size(); i++)
    {
        if(Tekst[i] == 32)
        {
            cout << i + 1 << " ";
        }
    }

    return 0;
}