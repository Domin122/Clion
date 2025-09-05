#include <iostream>
#include <algorithm>
using namespace std;

void palindrom(string &s){

    s.erase(remove(s.begin(),s.end(),' '),s.end());
    for(char & i : s){
        i = tolower(i);
    }
    int dl;
    bool czy= true;
    dl = s.length();
    int i=0;
    while(i<dl/2){
        if(s[i]!=s[dl-i-1]){
            czy = false;
            break;
        } else
            i++;
    }

    if (czy)
        cout << "TAK";
    else
        cout << "NIE";
}

int main() {
    string s = "ab b a";
    palindrom(s);
    return 0;
}


