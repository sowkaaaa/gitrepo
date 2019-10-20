/*
 * tablica_najm.cpp
 *
 */




#include <iostream>
using namespace std;

void pobierzOceny(int t[], int r){
	cout << "Podaj" << r << " ocen: " << endl;
	int i;
	for (i=0; i < r; i++){
		cin >> t[i];
	}
}

void drukujTab(int t[], int r){
	int i;
	for (i=0; i < r; i++){
		cin >> t[i];
	}
}

float srednia(int t[], int r){
	int i;
	float suma;
    for (i = 0; i < r; i++){
        suma += t[i];
    }
    return suma / r;
}


int main(int argc, char **argv)
{
	cout << "Ile ocen podasz? ";
	int rozmiar;
	cin >> rozmiar;
	int tablica[rozmiar]; // wskazuje pierwsza komórkę

	pobierzOceny(tablica, rozmiar);
	//drukujTab(tablica, rozmiar);
	cout << "Średnia: " << srednia(tablica,rozmiar) << endl;



	return 0;
}

