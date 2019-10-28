/*
 * tab1.cpp
 * 
 */


#include <iostream>

using namespace std;


int main(int argc, char **argv)
{	
	int i;
	int rozmiar = 5;
	int tab1[rozmiar];
	int tab2[rozmiar];
	int suma1 = 0;
	int suma2 = 0;
	cout << "Podaj 5 liczb: " << endl;
		for (i=0; i<rozmiar; i++){
			cin >> tab1[i];
			suma1 += tab1[i]; 
		}
	cout << "Podaj ponownie 5 liczb: " << endl;
		for (i=0; i<rozmiar; i++){
			cin >> tab2[i];
			suma2 += tab2[i]; 	
		}
	if(suma1 > suma2) cout << "Tablica 1 wieksza od tablicy 2";
	else
	if (suma2 > suma1) cout << "Tablica 1 wieksza od Tablicy 2";
	else
	cout << "Tablice są równe.";
	
	
	return 0;
}

