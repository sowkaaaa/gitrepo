/*
 * zad_12_110_sowinski.cpp
 */
#include <iostream>
using namespace std;

void bubble_sort(int tab[], int n){
	int ile = 0;
	for (int i=n-1; i > 0; i--){
		for (int j=0; j < i; j++){
			if (tab[j] < tab[j+1]){	
				ile ++
			}
		}
		cout << endl;
	}
}
int dzielnik(int p) {
	for(int i = 1; i<+p; i++){
		if (p%i==0) cout << i<< " ";
		}
		return 0;
	}
	
int main(int argc, char **argv)
{   
	int p;
	cout << "Podaj dowolna liczbe całkowitą: " << endl;
	cin >> p;
	dzielnik(p);
	cout << endl;
	int q = dzielnik(p);
	cout << endl;
	bubble_sort(tab, q);
	
	
	return 0;
}

