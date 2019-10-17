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
	int suma = ;
    for (int i = 0; i < r; i++)
            
	
	}


int main(int argc, char **argv)
{
	cout << "Ile ocen podasz? ";
	int rozmiar;
	cin >> rozmiar;
	int tablica[rozmiar]; // wskazuje pierwsza komórkę
		
	pobierzOceny(tablica, rozmiar);
	drukujTab(tablica, rozmiar);
	
	return 0;
}

