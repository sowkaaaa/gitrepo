#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  sowinski_petle.py

def cw1():
    suma = 0
    while suma <= 75:
        suma += int(input("Podaj liczbę: "))
    print(suma)
    pass
    
    
def cw2():
    m = int(input("Podaj zakres górny: "))
    n = int(input("Podaj zakres dolny: "))
    for i in range(m, n+1): 
        print(i, end=' ')
    pass
    
    
def cw3():
    n = int(input("Liczba: "))
    for i in range(n + 1): 
        print(i*i)
    pass


def main(args):
    
    print(cw2())
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
