#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
 
    for(int i=0; i<n; i++)
    {
        if(i+1==n) 
        {
            if(n%2==0) {cout<<"I love it ";}
            else {cout<<"I hate it ";}
        }
        else 
        {
            if(i%2==0) {cout<<"I hate that ";}
            else {cout<<"I love that ";}
        }
    }
 
    return 0;
}