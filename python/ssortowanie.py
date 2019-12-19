#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  ssortowanie.py


from random import randint 

def wypelnij(lista, n):
    for i in range(n):
        lista.append(randint(0, 100))

def wyswietl(lista):
    for i in lista:
        print(i, " ", end='')
    print()
 
def zamien(tab, j, i):
	tmp = tab[j]
	tab[j] = tab[i]
	tab[i] = tmp
    
def sort_bubble(tab):
	n = len(tab)
	for i in range(n-1, 0, -1):
		
		for j in range(0, i):
			if tab[j] > tab[j+1]:
				zamien(tab, j, j+1)
				

def sort_selection(tab):
	n = len(tab)
	for i in range(0, n):
		for j in range(i+1
			if tab[j] = tab[i]:
				zamien(tab, j, i)

	
def main(args):
    n = int(input('Ile liczb wylosować? '))
    lista = []
    wypelnij(lista, n)
    wyswietl(lista)
    sort_bubble(lista)
    wyswietl(lista)
    sort_selection(lista)
    wyswietl(lista)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
