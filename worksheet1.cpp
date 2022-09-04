#include <bits/stdc++.h>

using namespace std;

int main() {

    int n,queue;
    cin>>n;

    

    // if(n < 6) { queue-- ;}

    for(int i=1; i<n; i++) {
        queue = i%5;
        cout<<i<<" ";
        switch(queue) {
            case 1: { cout<<"Sheldon"; break;}
            case 2: { cout<<"Leonard"; break;}
            case 3: { cout<<"Penny"; break;}
            case 4: { cout<<"Rajesh"; break;}
            case 0: { cout<<"Howard"; break;}
        }
        cout<<endl;
    }

    // for(int i=1; i<n; i++) {
    //     cout<<i%5<<endl;
    // }

    return 0;
}