#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  sowinski_petle.py

def cw1():
    suma = 0
    liczba = int(input('Podaj liczbę: '))
    while suma<75:
        suma += liczba
        print(suma)
        liczba = int(input('Podaj liczbę: '))
    print()
    print( 'Suma liczb : ', suma)
    pass
    
    
def cw2():
    m = int(input('Podaj zakres górny: '))
    n = int(input('Podaj zakres dolny: '))
    liczba = 0 
    for i in range(m, n+1):
        liczba = liczba + 1 
        print(i, end=' ')
    return " "
    pass
    
    
def cw3():
    n = 0
    m = int(input('Podaj ostatnią liczbę: '))
    kwadrat = 0
    for kwadraty in range(n, m + 1)
        kwadrat 
        
    print(kwadrat)
    pass


def main(args):
    
    print(cw2())
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
