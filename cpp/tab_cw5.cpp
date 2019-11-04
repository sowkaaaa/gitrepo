/*
 * tab_cw5.cpp
 * 
 */


#include <iostream>
#include <cstring>
using namespace std;
#define ROZMIAR 100

int main(int argc, char **argv)
{	
	char tablica[ROZMIAR];
    cout << "Podaj tekst: " << endl; 
    cin.getline(tablica, ROZMIAR);
    
    int t = strlen(tablica);
    for(int i=0; i < t; i++){        
	if  (int(tablica[i]) > 66 && int(tablica[i]) < 91) { 
		tablica[i] += 32; 
		cout << char(tablica[i]);}
    else 
    if  (int(tablica[i]) > 98 && int(tablica[i]) < 123){
         tablica[i] -= 32;
         cout << char(tablica[i]);}
	 }
                    
	return 0;
}

