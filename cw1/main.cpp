#include <iostream>
#include <string>

using namespace std;

int main()
{
    string imie,nazwisko;
    int rok_urodzenia,aktualny_rok=2017;
    cout<<"Podaj imie i nazwisko"<<endl;
    cin>>imie>>nazwisko;
    cout<<"Podaj rok urodzenia"<<endl;
    cin>>rok_urodzenia;
    cout<<"Witam, nazywasz sie "<<imie<<" "<<nazwisko<<" i masz "<<aktualny_rok-rok_urodzenia<<" lat"<<endl;

    return 0;
}
