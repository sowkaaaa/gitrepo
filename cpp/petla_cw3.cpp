/*
 * petla_cw3.cpp
 *
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)

{
    int n =0;
    int m =0;
    cout<<"Podaj ostatnią liczbę: ";
    cin >> m;
    for( n=0; n<m+1 ;n++ ) {
        cout << n*n <<" ";
    }

	return 0;
}

