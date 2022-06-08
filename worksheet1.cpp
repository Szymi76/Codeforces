#include <bits/stdc++.h>

using namespace std;

bool validLetter(char c) {
    char letters[4] = {'h','e','l','o'};

    for(int i=0; i<4; i++) {
        if(c == letters[i]) { return true ;}
    }
    
    return false;
}

bool used(vector<char> arr, char c) {

    if(c == 'l') {
        int count = 0;
        for(int i=0; i<arr.size(); i++) { if(arr[i] == 'l') { count++ ;} }
        if(count <= 1) { return false ;}
        else { return true ;}
    }   

    for(int i=0; i<arr.size(); i++) {
        if(arr[i] == c) { return true ;}
    }

    return false;
}

string validLetters(string str) {
    string newStr = "", result = "";

    for(int i=0; i<str.length(); i++) {
        if(validLetter(str[i])) { newStr+=str[i] ;}
    }

    vector<char> usedLetters;
    
    for(int i=0; i<newStr.length(); i++) {
        if(used(usedLetters, newStr[i]) == false) { 
            usedLetters.push_back(newStr[i]);
            result+=newStr[i];
        }
    }

    return result;
}   

string removeDup(string str) {
    string newStr = "";
    newStr+=str[0];

    for(int i=1; i<str.length(); i++) {
        if(str[i] != str[i-1]) { 
            if(str[i] == 'l' && str[i+1] == 'l') { newStr+='l' ;}
            newStr+=str[i] ;}
    }

    cout<<newStr<<endl;
    return newStr;
}

int main()
{
    string str;
    cin>>str;

    str = validLetters(str);
    if(removeDup(str) == "hello") { cout<<"YES" ;}
    else { cout<<"NO" ;}

    return 0;
}