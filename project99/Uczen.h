//
// Created by Dominik Gabrysz on 13/11/2025.
//

#ifndef PROJECT99_UCZEN_H
#define PROJECT99_UCZEN_H
#include "string"
using namespace std;

class Uczen {
    string imie;
    int wiek;
    double srednia;
public:
    Uczen(string,int,double);

    string pobierzImie() const;
    int pobierzWiek() const;
    double pobierzSrednia() const;

    void ustawImie(string noweImie);
    void ustawWiek(int nowyWiek);
    void ustawSrednia(double nowaSrednia);

    void wypiszInformacje() const;

};


#endif //PROJECT99_UCZEN_H
