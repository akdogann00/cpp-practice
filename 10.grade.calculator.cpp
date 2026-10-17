#include <iostream>
using namespace std;

int main()
{
    int sayi;

    cout << "Notunuzu Giriniz: ";

    cin >> sayi;

    cout << endl;

    if (sayi > 50)
    {
        cout << "Sinifi Gecti: ";
    }
    else if (sayi == 50)
    {
        cout << "Sinifi Gecti: ";
    }
    else if (sayi < 50)
    {
        cout << "Sinifta Kaldi: ";
    }

    return 0;


}

