/*
 * szyfr_cezara.cpp
 */


#include <iostream>
#include <cstring>

using namespace std;


void duze_na_male(char tekst[]){
	int kod = 0;
	int ilosc = strlen(tekst);
		for(int i = 0; i < ilosc; i++){
			kod = (int)tekst[i];
			if( kod > 64 || kod < 90){
				kod = (char)(kod + 32);
			}
		}
	}

int main(int argc, char **argv)
{
	int r = 30;
	char tekst[r];
	cout << "Podaj tekst: " << endl;
	cin.getline(tekst,r);
	
	duze_na_male(tekst);
	
	return 0;
}

