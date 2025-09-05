#include <iostream>

using namespace std;


int main() {

int *a = new int ,*b = new int ,*c = new int,*d = new int;

cout << "Podaj ocene z Polskiego: " << endl;
cin >> *a;
cout << "Podaj ocene z Matematyki: " << endl;
cin >> *b;
cout << "Podaj ocene z Angielskiego: " << endl;
cin >> *c;
cout << "Podaj ocene z Informatyki: " << endl;
cin >> *d;

cout << endl << "Średnia: " << ((double)(*a + *b + *c + *d))/4.0 ;


    return 0;
}
