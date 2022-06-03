#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin>>t;

    for(int s=0; s<t; s++) {

        int l1,l2,l3;
        cin>>l1>>l2>>l3;

        int tab[3] = {l1,l2,l3};
        sort(tab, tab+3);

        if(l1 != l2 && l1 != l3 && l2 != l3) {
            if(tab[2] - tab[0] == tab[1]) {cout<<"YES";}
            else {cout<<"NO";}
        }
        else {
            if(tab[0] == tab[1]) {
                if(tab[2]%2 == 0) {cout<<"YES";}
                else {cout<<"NO";}
            }
            else if(tab[1] == tab[2]) {
                if(tab[0]%2 == 0) {cout<<"YES";}
                else {cout<<"NO";}
            }
        }
        
        cout<<endl;
    }

    return 0;
}