#include <bits/stdc++.h>

using namespace std;

bool resolve(string dane) {

    for(int i=0; i<dane.length(); i++) {
        int a = dane[i];
        if(a == 72 || a == 81 || a == 57) { return true ;}
    }
    return false;
}

int main()
{
    string dane;
    cin>>dane;

    if(resolve(dane) == true) { cout<<"YES" ;}
    else { cout<<"NO" ;}

    return 0;
}


