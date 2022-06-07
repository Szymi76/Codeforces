#include <bits/stdc++.h>

using namespace std;

string removeChar(string str, int index) {
    string newString = "";
    
    for(int i=0; i<str.length(); i++) {
        if(i != index) { newString+=str[i] ;}
    }

    return newString;
}


int main () {

    string n;
    cin>>n;

    int l = n.length();

    if(n[0] == '-') {
        if(n[n.length()-1] > n[l-2]) { n = removeChar(n,l-1); }
        else { n = removeChar(n,l-2) ;} 
        
        if(n.length() == 2 && n[1] == '0') { n = removeChar(n,0) ;}
    }

    cout<<n;

    return 0;
}