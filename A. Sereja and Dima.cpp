#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,sereja=0,dima=0;
    cin>>n;
    int tab[n];

    for(int i=0; i<n; i++)
    {
        cin>>tab[i];
    }
    int a=0,b=n-1;
    for(int i=0; i<n; i++)
    {
        int pom=0;
        if(i%2==0) 
        {
            if(tab[a]>tab[b]) {sereja+=tab[a]; a++;}
            else {sereja+=tab[b]; b--;}
        }
        else 
        {
            if(tab[a]>tab[b]) {dima+=tab[a]; a++;}
            else {dima+=tab[b]; b--;}
        }
    }
    cout<<sereja<<" "<<dima;

    return 0;
    
}