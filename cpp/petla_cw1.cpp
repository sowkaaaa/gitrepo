/*
 * petla_cw1.cpp 
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int suma = 0;
    int i=0;
    while(suma <= 75){
        cout << "Podaj liczbę: ";
        cin >> i;
        suma += i;
        cout <<  suma << endl;
}
	
	return 0;
}

