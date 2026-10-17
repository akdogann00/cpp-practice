#include <iostream>
using namespace std;
int main()
{
    int sayi;

    cout << "Bir sayi giriniz: ";

    cin >> sayi;

    cout << endl;

    cout << "Girdiginiz sayi: " << sayi;

    if (sayi % 2 == 0)
    {
        cout << " Sayisi Cifttir";
    }
    else
    { 
        cout << " Sayisi Tektir.";
    }

    return 0;
}

