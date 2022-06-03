#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin>>t;
    for(int i=0; i<t; i++) {

        double r,b,d;
        cin>>r>>b>>d;

        double smaller;
        double larger;
        if(r >= b) {smaller = b; larger = r;}
        else {smaller = r; larger = b;}

        double dev = larger / smaller;
        double diff = abs(dev - 1);

        if(diff > d) {cout<<"NO";}
        else {cout<<"YES";}

        cout<<endl;
    }


    return 0;
}