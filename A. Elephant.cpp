#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int x,steps=0;
    cin>>x;
 
    if(x==0) {cout<<"0"; exit(0);}
 
    while(x>5)
    {
        x = x-5;
        steps++;
    }
    steps++;
    cout<<steps;
 
    return 0;
}