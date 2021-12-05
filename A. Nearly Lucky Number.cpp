#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string liczba;
    int x=0;
    cin>>liczba;
 
    for(int i=0; i<liczba.length(); i++)
    {
        if(liczba[i]=='4'||liczba[i]=='7') {x++;}
    }
    if(x==4||x==7) {cout<<"YES"; exit(0);}
    
    cout<<"NO";
 
    return 0;
}