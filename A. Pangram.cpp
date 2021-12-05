#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    char dane[n];
    int litery=0;
    string alfabet = "abcdefghijklmnopqrstuvwxyz";
    
    
    for(int i=0; i<n; i++)
    {
        cin>>dane[i];
        char znak = dane[i];
        dane[i] = tolower(znak);
    }
    sort(dane, dane+n);
    
    for(int i=0; i<n; i++)
    {
        if(dane[i]==dane[i+1])
        {
            dane[i]=0;
        }
    }
    for(int j=0; j<26; j++)
    {
        for(int i=0; i<n; i++)
        {
        if(alfabet[j]==dane[i]) {litery++;}
        }
    }
    if(litery==26) {cout<<"YES";}
    else {cout<<"NO";}
    
    return 0;
}