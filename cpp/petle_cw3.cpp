/*
 * petle_cw3.cpp
 *
 * Copyright 2019 Lenovo <Lenovo@DESKTOP-M5KAEQ5>
 *
 */


#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char **argv)

{
    int n =0;
    int m =0;
    cout<<"Liczba ko�cowa: ";
    cin >> m;
    for(n=0; n<m+1; n++)
        { cout << pow(n, 2) << " "; }

	return 0;
}

