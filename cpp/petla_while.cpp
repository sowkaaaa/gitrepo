/*
 * petla.cpp
 */


#include <iostream>

using namespace std;


int main(int argc, char **argv)
{
	
	int i = 0; //deklaracja i inicjacja = definicja
	while(i <= 20) {
		cout << i << endl;
		cout << "Hello!";
		i += 2;
	}
	
	cout << endl << "Wartosc i:" << i << endl;
	return 0;
}

