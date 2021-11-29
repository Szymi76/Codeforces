#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int tab[n];
    int tab1[3] = {0,0,0};

    for(int i=0; i<n; i++)
    {
        cin>>tab[i];
        if(tab[i]==1) {tab1[0]++;}
        else if(tab[i]==2) {tab1[1]++;}
        else {tab1[2]++;}
    }
    sort(tab1,tab1+3);
    cout<<tab1[0]<<endl;

    int a=0,b=0,c=0;
    for(int i=0; i<tab1[0]; i++)
    {
        while(tab[a]!=1) {a++;}
        cout<<a+1<<" ";
        a++;
        while(tab[b]!=2) {b++;}
        cout<<b+1<<" ";
        b++;
        while(tab[c]!=3) {c++;}
        cout<<c+1<<" ";
        c++;
        cout<<endl;
    }

    return 0;
}