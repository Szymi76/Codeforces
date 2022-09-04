#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {

    set <int> s;
    
    for(int i=0; i<5; i++) {
        int x;
        cin>>x;
        s.insert(x);    
    }

    set <int> ::iterator e;

    e = s.find(3);

    cout<<*e<<endl;

    return 0;
}