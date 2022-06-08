#include <bits/stdc++.h>

using namespace std;

bool every(string str) {

    for(int i=0; i<str.length(); i++) {
        if(str[i] != '7' && str[i] != '4') { return false ;}
    }

    return true;
}

int main() {

    int n;
    cin>>n;

    string str = to_string(n);

    if(every(str) == true) { cout<<"YES" ;}
    else {
        if(n%4 == 0 || n%7 == 0 || n%44 == 0 || n%47 == 0) { cout<<"YES" ;}
        else { cout<<"NO" ;}
    }
    

    return 0;
}