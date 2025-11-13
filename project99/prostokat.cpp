//
// Created by Dominik Gabrysz on 13/11/2025.
//

#include "prostokat.h"

void Prostokat::setWymiar(int a, int b) {
    szer = a;
    wys = b;
}

void Prostokat::setSzer(int a) {
    szer = a;
}

void Prostokat::setWys(int b) {
    wys = b;
}

Prostokat::Prostokat(int a, int b) {
    szer = a;
    wys = b;
}
