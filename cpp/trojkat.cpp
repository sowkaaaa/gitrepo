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
	int a;
	cout << "Podaj bok pierwszy: ";
	cin >> a;
	int b;
	cout << "Podaj bok drugi: ";
	cin >> b;
	int c;
	cout << "Podaj bok trzeci: ";
	cin >> c;
	if (a+b>c && a+c>b && b+c >a)
        cout << "To jest trójkat" << endl;
    else
		cout << "To trójkątem na pewno nie jest!" << endl;
    if ((a * a + b * b ==  c * c) || (a * a + c * c ==  b * b) || (b * b + c * c ==  a * a))
        cout << "To jest trojkat prostokatny.";
    else
        cout << "To nie jest trojkat prostokatny.";
	return 0;
}

