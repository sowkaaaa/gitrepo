/*
 * reszta.cpp 
 */
 
#include <iostream>
using namespace std;

int nominaly[100];
int liczbaNominalow;

void wczytajNominaly(){
	cout << "Podaj liczbe nominałów: ";
	cin >> liczbaNominalow;
	
	cout << "Podaj nominały w kolejnosci malejącej: " << endl;
	int i = 0;
	int nominal = 0;
	cin >> nominal;
	nominaly[i] = nominal;
	i++;
	while(i < liczbaNominalow){
		cin >> nominal;
		if (nominal > nominaly[i-1]) { 
			cout << "Nominał wiekszy od poprzedniego!" << endl;
			continue;
		}
		nominaly[i] = nominal;
		i++;
	}

	//for(int i = 0; i < liczbaNominalow; i++){
		//cin >> nominaly[i];
	//}
	for(int i = 0; i < liczbaNominalow; i++){
		cout << nominaly[i] << " "; }
	}


int znajdzReszte(int reszta){
	cout << "Wypłacone nominały: " << endl;
	int aktualnyNominal = 0;
	
	while(reszta > 0 && aktualnyNominal < liczbaNominalow){
		cout << "reszta = " << reszta << endl;
		znajdz najwiekszy dostepny nominal mniejszy ood reszt;
		cout << "aktualny nominał: " << nominaly[aktualnyNominal] << endl;
		oblicz wymagana ilosc nominalów
		pomniejsz reszte
		
	}
	
}
// [50, 50, 50, 20, 10, 10, 5, 5, 5, 1]
int main(int argc, char **argv)
{
	wczytajNominaly();
	int cena;
	int wplata;
	cout << "Podaj wpłatę: ";
	cin >> wplata;
	
	do { // petla blokująca
		cout << "POdaj wpłatę: ";
		cin >> wplata;
	} while(wplata < cena);
	
	znajdzReszte(wplata - cena);
	
	return 0;
}

// R = 69;
// 1) R: = 69 - 50 * (69 % 50) = 19
// 2) R: 19 - 10 * (19 % 10) = 9
// 3) R: 9 - 5 * (9 % 5) = 4
// 4) R: 5 - 2 * (5 % 2) = 1 
