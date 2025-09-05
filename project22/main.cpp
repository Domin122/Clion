#include <iostream>

using namespace std;

class Person {
public:
    static int age;
    string name = "Michal", surname;
};

int Person::age = 45;


int main() {
    Person adam;
    adam.age = 5;

    Person Janek;
    cout << Janek.age;
    return 0;
}
