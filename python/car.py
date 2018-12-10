#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  car.py

# zdefiniuj klsasę Samochód z nast. atrybutami i metodami:
# marka, np. Fiat
# model, np. Tipo
# rok produkcji, np . 2002
# metoda wiek(), która zwróci wiek samochodu w latach
from datetime import date
from osoba_obj import Osoba

class Kierowca(Osoba):
    
    def __init__(self, imie, nazwisko, kategoria):
        super().__init__(imie, nazwisko)
        self.kategoria = kategoria

class Samochod():
    def __init__(self, marka, model, rokProdukcji):
        self.marka = marka
        self.model = model
        self.rokProdukcji = rokProdukcji
        self.kierowca = kierowca
        
    def wiek(self):
        dzis = date.today()
        return dzis.year - self.rok
        
    


def main(args):
    s1 = Samochod('Fiat', 'Punto', '2000')
    s2 = Samochod('Toyota', 'Auris', '2015')
    
    print(s1.marka, s1.model, s1.rokProdukcji, s1.wiek())
    print(s2.marka, s2.model, s2.rokProdukcji, s2.wiek())
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
