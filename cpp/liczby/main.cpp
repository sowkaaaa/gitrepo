#include <iostream>

using namespace std;

int main()
{
    int a;
	cout << "Podaj liczbę pierwszą: " << endl;
	cin >> a;
	int b;
	cout << "Podaj liczbe drugą: " << endl;
	cin >> b;
	int c;
	cout << "Podaj liczbę trzecia: " << endl;
	cin >> c;
    if (a > b && a > c)
        {cout << a << "najwieksza" << endl;}
        if (b > c && b < a)
        {cout << b << "średnia" << endl;}
        else
        if (c > b && c < a)
        {cout << c << "średnia" << endl;}
        if (c < a &&  c < b)
        {cout << c << "njmniejsza" << endl;}
	if (c > a && c > b)
        {cout << c << "najwieksza" << endl;}
        if (a > b && a < c)
        {cout << a << "średnia" << endl;}
        else
        if (b > a && b < c)
        {cout << b << "średnia" << endl;}
        if (b < a &&  b < c)
        {cout << b << "njmniejsza" << endl;}
    if (b > a && b > c)
        {cout << b << "najwieksza" << endl;}
        if (c > a && c < b)
        {cout << c << "średnia" << endl;}
        else
        if (a > c && a < b)
        {cout << a << "średnia" << endl;}
        if (a < b &&  a < c)
        {cout << a << "njmniejsza" << endl;}

    return 0;
}
