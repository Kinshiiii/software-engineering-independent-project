#include <iostream>

using namespace std;

void wykonaj_operacje() {
    int liczba;
    cout << "Podaj liczbę całkowitą dodatnią: ";
    cin >> liczba;
    
    cout << "Wpisałeś liczbę: " << liczba << endl;
}

int main() {
    wykonaj_operacje();
    return 0;
}