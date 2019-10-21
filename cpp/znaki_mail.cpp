/*
 * znaki.cpp
 * znakiem kończącym tablicę znakową jest \0 
 */


#include <iostream>

using namespace std;


void koduj(char tabzn[], int rozmiar) {
	for(int i = 0; i < rozmiar ; i++){
		cout << (int)tabzn[i] << " ";
		}
}
void dekoduj(int kod[];int rozmiar){
		for(int i = 0; i < rozmiar ; i++){
		cout << (char)kod[i] << " ";
		}
}


int main(int argc, char **argv)
{
	int rozmiar = 11;
	char napis[rozmiar] = "kapie mi sos";
	cout << "Wpisz tresc wiadomosci";
	cin >> napis;
	int kod[rozmiar] = {56, 67, 89};
	
	koduj(napis, rozmiar);
	dekoduj(kod, rozmiar);
	
	
}
	

	
	return 0;
}

