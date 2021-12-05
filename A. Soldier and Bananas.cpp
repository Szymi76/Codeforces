#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
   int k,w,n,suma=0;
   cin>>k>>w>>n;
 
   for(int i=1; i<=n; i++)
   {
        suma = suma + (k*i);        
   }
    suma = suma - w;
    if(suma<0) {cout<<"0";}
    else {cout<<suma;}
 
    return 0;
}