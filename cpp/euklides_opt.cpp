/*
 * euklides_opt.cpp
 * 
 */


#include <iostream>
using namespace std;


int main(int argc, char **argv)
{	int a, b, i;
	a = b = i = 0;
	cout << "Podaj dwie liczby całkowite" << endl;	
	cin >> a >> b;
	while(a != b){
		i++;
		a = a % b;
		b =  b - a;
		}
		cout << b << endl; 
	
	return 0;
}

