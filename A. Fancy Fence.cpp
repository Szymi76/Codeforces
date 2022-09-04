#include <bits/stdc++.h>

using namespace std;

int main() {

    double t,a;
    cin>>t;

    for(int s=0; s<t; s++) {
        cin>>a;

        double sides = 360/(180-a);
        if(sides == ceil(sides)) { cout<<"YES"<<endl ;}
        else { cout<<"NO"<<endl ;}
    }

    return 0;
}