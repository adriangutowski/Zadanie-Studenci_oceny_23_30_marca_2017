#include <iostream>

using namespace std;

struct Uczen
{
    string Nazw;
    float ZIOP, Matematyka, Informatyka, BazyDanych;
    Uczen()
    {

    }
    Uczen(string Nazw, float ZIOP, float Matematyka, float Informatyka, float BazyDanych)
    {
        this->Nazw = Nazw;
        this->ZIOP = ZIOP;
        this->Matematyka = Matematyka;
        this->Informatyka = Informatyka;
        this->BazyDanych = BazyDanych;
    }
    float Ocena(int nrPrzedmiotu)
    {
        switch(nrPrzedmiotu)
        {
        case 0:
            return ZIOP;
        case 1:
            return Matematyka;
        case 2:
            return Informatyka;
        case 3:
            return BazyDanych;
        }
    }
};

int main()
{
    Uczen Klasa[5];

    for(int i = 0; i < 5; ++i)
    {
        cout << "Uczen NR: " << i << endl;
        cout << "Wprowadz Nazwisko Ucznia: ";
        cin >> Klasa[i].Nazw;
        cout << "Wprowadz ocene z ZIOP: ";
        cin >> Klasa[i].ZIOP;
        cout << "Wprowadz ocene z Matematyka: ";
        cin >> Klasa[i].Matematyka;
        cout << "Wprowadz ocene z Grafiki: ";
        cin >> Klasa[i].Informatyka;
        cout << "Wprowadz ocene z BazyDanych: ";
        cin >> Klasa[i].BazyDanych;
        cout << endl;
    }

    int nrUcznia, nrPrzedmiotu;

    while(true)
    {
        cout << endl << "SPRAWDZ OCENE" << endl;
        cout << "Numer Ucznia: ";
        cin >> nrUcznia;
        cout << "Numer przedmiotu (ZIOP = 0, Matematyka = 1, Informatyka = 2, BazyDanych = 3): ";
        cin >> nrPrzedmiotu;
        cout << endl << "Ocena to: " << Klasa[nrUcznia].Ocena(nrPrzedmiotu) << endl;
    }

    return 0;
}
