#include <bits/stdc++.h>

using namespace std;

bool isValid(char letter) {
    char letters[6] = {'a','o','y','e','u','i'};

    for(int i=0; i<6; i++) {
        if(letter == letters[i]) { return false ;}
    }

    return true;
}

string resolve(string str) {
    string newStr = "";

    for(int i=0; i<str.length(); i++) {
        char c = tolower(str[i]);

        if(isValid(c)) { 
            newStr+=".";
            newStr+=c;
        }  
    }

    return newStr;
}

int main () {

    string str;
    cin>>str;

    cout<<resolve(str);

    return 0;
}