/*
 * zadanie_funkcje.cpp
 *
 */


#include <iostream>

using namespace std;

int staz = 1;
float zarobek = 1000;

void drukuj() {
    cout << "Pracujesz " << staz << " lat i zarabiasz " << zarobek << endl;
}

int awans() {
    staz += 1;
    zarobek = zarobek * 1.1;
    return zarobek, staz;
}

int main(int argc, char **argv)
{   int lata = 1;
    cout << "Podaj staz pracy w latach: " << endl;
    cin >> lata;
    for(int i = 1; i <= lata; i++){
    drukuj();
    awans();
    }
	return 0;
}

