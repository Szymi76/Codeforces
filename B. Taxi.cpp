#include <bits/stdc++.h>

using namespace std;

int main() {

    int n,inp,c1=0,c2=0,c3=0,c4=0,cars=0;
    cin>>n;

    for(int i=0; i<n; i++) {
        cin>>inp;

        if(inp == 1) { c1++ ;}
        if(inp == 2) { c2++ ;}
        if(inp == 3) { c3++ ;}
        if(inp == 4) { c4++ ;}
    }

    cars+=c4;

    if(c1 > c3) { 
        cars+=c3;
        c1-=c3;
        c3 = 0;
    } else {
        cars+=c1;
        c3-=c1;
        c1 = 0;
    }

    cars+=c2/2;
    if(c2%2 != 0) { c2 = 1 ;}
    else if(c2%2 == 0) { c2 = 0 ;}

    if(c2 == 1 && c1 > 1) { 
        cars++;
        c1-=2;
        c2 = 0;
    } 
    if(c2 == 1 && c1 == 1) {
        cars++;
        c1--;
        c2 = 0;
    }

    cars+=c3;
    cars+=ceil(double(c1)/4);
    cars+=c2;

    cout<<cars;

    return 0;
}
