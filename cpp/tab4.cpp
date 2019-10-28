/*
 * tab4.cpp
 * 
 */


#include <iostream>
#include <iomanip>
using namespace std;


int main(int argc, char **argv)
{	int n = 5;
    int m = 7; 
    int i, j, a, r;
    
    int tabW[n][m];
    cout << "Podaj liczbę początkową: " << endl;
    cin >> a;
    
    cout << "Podaj liczbę (powiekszenie o nią): " << endl;
    cin >> r;
    
    srand (time(NULL));

    for(i=0; i < n; i++){
    for(j=0; j < m; j++){
       tabW[i][j] = a+(i+1)*(j+1)*r;
        cout << setw(4) << tabW[i][j] << " ";
        }
        cout << endl;
    }
    
	
	return 0;
}

