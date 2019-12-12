/*
 * sortowanie.cpp
 */
#include <iostream>
using namespace std;

void wypelnij(int tab[], int n) {
	srand(time(NULL));
	for (int i=0; i < n; i++) {
		tab[i] = rand() % n;
	}
}

void wyswietl(int tab[], int n) {
	for (int i=0; i < n; i++) {
		cout  << tab[i] << " ";
	}
	cout << endl;	
}

void copytab(int tab1[], int tab2[],int n){
	for (int i=0; i < n; i++) {
		tab2[i] = tab1[i];
	}
}

void insert_sort(int tab[], int n){
	int i, k, el;
	for(i=1; i < n; i++){
			el = tab[i];
			k = i - 1;
			while (k >= 0 && tab[k] < el){
				tab[k+1]=tab[k];
				k--;
		}
		tab[k+1]=el;	
	}
}

void zamien(int &a, int &b){
	int tmp=a;
	a = b;
	b = tmp;
}

void selection_sort(int tab[], int n){
	int i, j, k;
	for(i=0; i < n; i++){
			k = i;
			for(j=i+1; j < n; j++){
				if (tab[j]<tab[k])
					k=j;
		}	
	}
	zamien(tab[k], tab[i]);
}

// 5, 3, 8, 5, 1, 0, 9
// 0, 3, 8, 5, 1, 5, 9
// 0, 1, 8, 5, 3, 5, 9

int main(int argc, char **argv) {
	int tab1[50];
	int tab2[50];
	int n;
	
	cout << "Ile elementów ma zwierać tablica (masz=50)? ";
	cin >> n;
	wypelnij(tab1, n);
	copytab(tab1, tab2, n);
	wyswietl(tab2, n);
	selection_sort(tab1, n);
	wyswietl(tab1, n);
	
	
	
	return 0;
}

