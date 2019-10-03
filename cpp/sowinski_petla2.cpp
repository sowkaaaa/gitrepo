/*
 * petla2.cpp
 *
 */


#include <iostream>
#include <iomanip>
using namespace std;

void drukujTabliczke(int x, int y) {
    int i, j;
    for (i = 1; i <= x; i++) {
        for (j = 1; j <= y; j++) {
                 cout << setw(4) << i * j << " " ;
        }
    cout << endl;
        }
}
void prostokat(int x, int y) {
    int i, j ;
    for (i = 1; i <= x; i++) {
    for (j = 1; j <= y; j++)
               { cout << "#" ; }

    cout << endl;
        }
    }
void pustak(int x, int y) {
    int i, j ;
    for (i = 1; i <= x; i++) {
    for (j = 1; j <= y; j++) {
        if (i == 1 || i == x)
        cout<< "#";
        else if (j == 1 || j == y)
        cout << "#";
        else
        cout <<" ";
            }
    cout << endl;
        }
    }
void choinka(int x){
    cout<<"Podaj x:";
    cin>>x;
    cout<<endl;
  int i,j;
  for (i=1;i<=x;i++)
    {
      for (j=1;j<=i;j++){
        cout << "#";}
      cout << endl;
} }

int main(int argc, char **argv)
{
    pustak(5,12);
    cout<<endl;
    prostokat(5,12);
    cout<<endl;
    choinka(1);
    cout<<endl;
	return 0;

}

