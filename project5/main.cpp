#include <iostream>

using namespace std;

class osoba{
    string imie, nazwisko;
public:
    void UstawImie(string imie){
        this -> imie = imie;
    }
    string PobierzImie(){
        return this->imie;
    }
    void UstawNazwisko(string nazwisko){
        this -> nazwisko = nazwisko;
    }
    string PobierzNazwisko(){
        return this->nazwisko;
    }
};

class student:public osoba{
public:
    string oceny;
    void UstawOceny(string oceny){
        this -> oceny = oceny;
    }
    string PobierzOceny(){
        return this->oceny;
    }
};

class studium:public student{
public:
    string nazwa, rok;

};

int main() {


   return 0;
}
