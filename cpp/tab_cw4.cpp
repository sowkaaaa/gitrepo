/*
 * tab_cw4.cpp
 * 
 */


#include <iostream>
#include <cstring>
#define MAX_R 100

using namespace std;

int main(int argc, char **argv)
{
	char tablica[MAX_R];
	int i = 0;
	cout << "Podaj tekst: " << endl;
	cin.getline(tablica, MAX_R);
	
		for (i = strlen(tablica); i >= 0 ; i--) {
		cout << tablica[i] << " ";
	 }

	
	
	return 0;
}

