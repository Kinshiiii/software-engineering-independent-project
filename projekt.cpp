#include <iostream>

using namespace std;

bool czy_pierwsza(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void wykonaj_operacje() {
    int liczba;
    cout << "Podaj liczbę całkowitą dodatnią: ";
    cin >> liczba;

    if (liczba <= 0) {
        cout << "Podano liczbę niedodatnią. Program zakończy działanie." << endl;
        return;
    }
    
    cout << "Wpisałeś liczbę: " << liczba << (czy_pierwsza(liczba) ? " (liczba pierwsza)" : " (liczba złożona)") << endl;
}

int main() {
    wykonaj_operacje();
    return 0;
}
