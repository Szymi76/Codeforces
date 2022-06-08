#include <bits/stdc++.h>

using namespace std;

bool resolve(string str) {
    vector<char> c = {'h','e','l','l','o'};

    for(int i=0; i<str.length(); i++) {
        if(str[i] == c[0]) { c.erase(c.begin()) ;}
        if(c.size() == 0) { return true ;}
    }
    
    return false;
}

int main() {

    string str;
    cin>>str;

    if(resolve(str) == true) { cout<<"YES" ;}
    else { cout<<"NO" ;}

    return 0;
}