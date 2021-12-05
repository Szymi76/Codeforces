#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int cubes=1,num=0,x=0,i=0,sum=0;

    while(sum<n)
    {
        i++;
        cubes = i+num;
        num = i+num;
        sum+=cubes;
        x++;     
    }
    if(sum>n) {cout<<x-1;}
    else {cout<<x;}

    return 0;
}