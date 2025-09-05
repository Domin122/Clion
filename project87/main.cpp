#include <iostream>
using namespace std;

class Operation {
public:
    virtual double calculate(double a, double b) = 0;
    virtual ~Operation() {}
};

class Addition : public Operation {
public:
    double calculate(double a, double b) override {
        return a + b;
    }
};

class Subtraction : public Operation {
public:
    double calculate(double a, double b) override {
        return a - b;
    }
};

class Multiplication : public Operation {
public:
    double calculate(double a, double b) override {
        return a * b;
    }
};

class Division : public Operation {
public:
    double calculate(double a, double b) override {
        if (b == 0) {
            cerr << "Nie dziel przez zero!!!" << endl;
            return 0;
        }
        return a / b;
    }
};

int main() {
    char op;
    double num1, num2;

    cout << "Wybierz operację (+, -, *, /): ";
    cin >> op;

    cout << "Podaj dwie liczby: ";
    cin >> num1 >> num2;

    Operation* operation = nullptr;

    switch (op) {
        case '+':
            operation = new Addition();
            break;
        case '-':
            operation = new Subtraction();
            break;
        case '*':
            operation = new Multiplication();
            break;
        case '/':
            operation = new Division();
            break;
        default:
            cerr << "Nieznana operacja!" << endl;
            return 1;
    }

    double result = operation->calculate(num1, num2);
    cout << "Wynik: " << result << endl;


    delete operation;

    return 0;
}