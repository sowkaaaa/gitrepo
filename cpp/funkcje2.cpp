/*
 * funkcje2.cpp
 *
 */


#include <iostream>

using namespace std;

int b = 10;

int dodaj(){
	int a = 0;
	cout << a << endl;
	cout << "b = " << b << endl;
	return 0;	
}

int dodaj2(int a, int b){
	// a = 20;
	// cout << "a = " << a << endl;
	// b = 50;
	// cout << "b = " << b << endl;
	// cout << a + b << endl;
	return a+b;	
}

void modyfikuj(int x, int y, int &z) {
	z = x + y + 50;
}

int main(int argc, char **argv)
{
	int a = 1;	
	int b = 200; // zmienna lokalna
	cout << a << endl;
	cout << b << endl;
	int suma = dodaj2(a, b);
	cout << "Suma: " << suma << endl;
	
	modyfikuj(a, b, suma);
	cout << "Suma: " << suma << endl;
	
	cout << a << endl;
	cout << b << endl;
	return 0;
}

