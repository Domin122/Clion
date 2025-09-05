#include <iostream>

using namespace std;

template <class T>
T fun(T a){
    return  a;
}

template <class T1 , class T2>
T1 fun1(T1 a,T2 b){
    return a + " " + b;
}

template <class T>
class User{
    T password;
public:
    void setter(T p){
        password = p;
    }
    void getter(){
        return password;
    }
};

int main() {



    return 0;
}
