// ConsoleApplication1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

void dodaj(int skladnik, int skladnik2);
void odejmowanie(int odejmowana, int odejmnik);
void prostokat(int podstawa,int wyskosc);
void trapez(int podstawa1, int podstawa2, int wysokosc1);
void trojkat(int podstawa2, int podstawa1);

int main()
{
    dodaj(4, 5);
    odejmowanie(8, 6);
    prostokat(5, 8);
    trapez(5, 3, 7);
    trojkat(5, 8);
}
void dodaj(int skladnik, int skladnik2) {
    cout <<"wynik dodawania to "<< skladnik + skladnik2 << endl;
}

void odejmowanie(int odejmowana, int odejmnik) {

    cout <<"wynik odejmowania to "<< odejmowana - odejmnik << endl;
}
void prostokat(int podstawa, int wyskosc) {
    cout << "pole prostokata to " << podstawa * wyskosc << endl;
}
void trapez(int podstawa1, int podstawa2, int wysokosc1) {
    cout << "pole trapezu to " << (podstawa1 + podstawa2) * wysokosc1 / 2 << endl;
}
void trojkat(int podstawa2, int podstawa1) {
    cout << "pole trojkata to " << (podstawa2 + podstawa1) / 2 << endl;
}


// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
