#include <iostream>
using namespace std;

int main()
{

    int sayi;

    cout << "Buraya Sayi Giriniz: ";

    cin >> sayi;

    cout << endl;

    if (sayi > 0)
    {
        cout << "Sayi Pozitiftir";
    }
    else if (sayi == 0)
    {
        cout << "Sayi Notrdur";
    }
    else if (sayi < 0)
    {
        cout << "Sayi Negatiftir";
    }

    return 0;
}