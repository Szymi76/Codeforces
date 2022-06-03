#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int s=0; s<t; s++) {

        string dane;
        cin>>dane;

        int len = dane.length();
        char tab[len];

        for(int i=0; i<len; i++) {
            tab[i] = dane[i];
        }

        sort(tab, tab+len);

        for(int i=0; i<dane.length(); i++) {
            cout<<tab[i];
        }
        cout<<endl;
    }

    return 0;
}


