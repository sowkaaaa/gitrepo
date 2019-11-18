/*
 * euklides.cpp
 * 
 */


#include <iostream>
using namespace std;

int NWD(int a, int b){
	
	while(a != b)
	if(a > b)
		a -= b;
	 else
		b -= a;
	return a;
	}
	
int main(int argc, char **argv)
{
	int a;
	int b;
	cout << "Podaj dwie liczby: " << endl;
	cin >> a >> b;
	cout << "Największy wspólny dzielnik podanych przez Ciebie liczb to: " << NWD(a,b) << endl;
	
	return 0;
}

