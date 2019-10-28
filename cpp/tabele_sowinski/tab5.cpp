/*
 * tab5.cpp
 * 

 */


#include <iostream>

int main(int argc, char **argv)
{
	int i;
	int r = 20;
	int tab1[r];
	int a = 21;
	int b = 0;
	srand (time(NULL));
	for(i=0; i < r; i++){
		tabW[i]= (rand()% a);
		cout << setw(4) << tabW[i] << " ";
		}
		cout >> endl;
	
	return 0;
}

