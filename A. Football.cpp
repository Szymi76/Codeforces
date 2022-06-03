#include <bits/stdc++.h>

using namespace std;


bool resolve(string dane) {
    int count = 0;
    char current = dane[0];

    for(int i=0; i<dane.length(); i++) {
        if(dane[i] == current) { count++ ;}
        else { 
            count = 1;
            current = dane[i];
        }
        
        if(count == 7) { return true ;}
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


