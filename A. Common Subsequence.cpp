#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin>>t;

    for(int s=0; s<t; s++) {

        int n,m;
        cin>>n>>m;
        
        int tab1[n], tab2[m], c = -1;

        for(int i=0; i<n; i++) { cin>>tab1[i]; }
        for(int i=0; i<m; i++) { 

            cin>>tab2[i]; 
            for(int j=0; j<n; j++) {
                if(tab2[i] == tab1[j]) { c = tab2[i]; }
            }
        }

        if(c == -1) { cout<<"NO"<<endl; }
        else { cout<<"YES"<<endl<<"1 "<<c<<endl; }
    }

    return 0;
}