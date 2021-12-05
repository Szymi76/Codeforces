#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n,a,b,ludzie=0,pojemnosc=0;
    cin>>n;
 
    for(int i=0; i<n; i++)
    {
        cin>>a>>b;
        ludzie = ludzie - a + b;
        if(ludzie>pojemnosc)
        {
            pojemnosc = ludzie;
        }
    }
    cout<<pojemnosc;
 
    return 0;
}