/*
 * petla_cw2.cpp
 *
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n, m;
    cout << "Podaj przedział od: ";
    cin  >>  n;
    cout << "Podaj przedział do: ";
    cin  >>  m;
    for (n; n<=m; n++)
        { cout << n << " "; }

	return 0;
}

