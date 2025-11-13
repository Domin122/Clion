//
// Created by Dominik Gabrysz on 13/11/2025.
//

#include "Uczen.h"
#include "iostream"
using namespace std;

Uczen::Uczen(string imie, int wiek, double srednia) {
    this->imie=imie;
    this->wiek=wiek;
    this->srednia=srednia;
}

string Uczen::pobierzImie() const{
    return imie;
}

int Uczen::pobierzWiek() const {
    return wiek;
}

double Uczen::pobierzSrednia() const {
    return srednia;
}

void Uczen::ustawImie(string noweImie) {
    imie = noweImie;
}

void Uczen::ustawWiek(int nowyWiek) {
    wiek = nowyWiek;
}

void Uczen::ustawSrednia(double nowaSrednia) {
    srednia = nowaSrednia;
}

void Uczen::wypiszInformacje() const {
    cout << "Imie: " << imie << endl;
    cout << "Wiek: " << wiek << endl;
    cout << "Średnia: " << srednia << endl;
}


