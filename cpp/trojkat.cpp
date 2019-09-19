/*
 * trojkat.cpp
 * 
 * Napisz program, który pobiera kod użytkownika i sprawdza czy da sie z nich budować trójkąt.
 * Program powinien wyprowadzać odpowiedni komunikat.
 */


#include <iostream>
#include<cmath>
using namespace std;

int main(int argc, char **argv)
{
	int bok1;
	cout << "Podaj bok pierwszy: ";
	cin >> bok1;
	int bok2;
	cout << "Podaj bok drugi: ";
	cin >> bok2;
	int bok3;
	cout << "Podaj bok trzeci: ";
	cin >> bok3;
	if (bok1 + bok2 > bok3)cout << "To jest trójkat";
		else cout << "To trójkątem na pewno nie jest!";
		
	if (sqrt(bok1)+ sqrt(bok2) = sqrt(bok3)) cout << "Trójkat prostokątny"
		else cout << "To nie jest trójkąt prostokątny"
	
	
	
	return 0;
}

