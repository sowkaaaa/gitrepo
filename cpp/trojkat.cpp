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
    if (sqrt(a)+ sqrt(b) = sqrt(c))
        cout << "Trójkat prostokątny" << endl;
    else
        cout << "To nie jest trójkąt prostokątny" << endl;




	return 0;
}

