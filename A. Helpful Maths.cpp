#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string ciag;
    cin>>ciag;

    int d = ciag.length()/2+1;
    int tab[d];
    int j=0;

    for(int i=0; i<d; i++)
    {
        char znak = ciag[j];
        int num = int(znak - 48);
        tab[i] = num;
        j+=2;
    }

    sort(tab,tab+d);

    for(int i=0; i<d; i++)
    {
        if(i==d-1) {cout<<tab[i]; break;}
        cout<<tab[i]<<"+";
    }

    return 0;
}