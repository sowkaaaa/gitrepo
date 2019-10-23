/*
 * znaki.cpp
 * znakiem kończącym tablicę znakową jest \0
 */


#include <iostream>

using namespace std;

void ascii(){
    int i = 0;
    for(i=65; i<91; i++){
        cout << i << "-" << char(i) << endl;
        }
}

void koduj(char tabzn[],int rozmiar=11){
    cout << "Podaj napis: ";
    cin >> tabzn;
    for(int i=0; i<rozmiar; i++){
        cout << "," << (int)tabzn[i];
    }
}

void dekoduj(char tabzn[],int rozmiar=11){
    for(int i=0; i<rozmiar; i++){
        cout << tabzn[i] << "-" << (char)tabzn[i] << endl;
    }
}


int main(int argc, char **argv)
{   int rozmiar=11;
    char napis[11];

    koduj(napis,rozmiar);
    cout << endl;
    char szyfr[11]={100,122,105,101,110,100,111,98,114,121,121};
    dekoduj(szyfr,rozmiar);
    return 0;
}

