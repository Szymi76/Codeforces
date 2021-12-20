#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    bool value1 = false, value2 = false, value3 = false;

    if(n>1)
    {
        if(n==2||n==3||n==5||n==7) {value1 = true;}
        else
        {
            if(n%2==0||n%3==0||n%5==0||n%7==0) {value1 = false;}
            else {value1 = true;}
        }
    }
    else {value1 = false;}

    if(m>1)
    {
        if(m==2||m==3||m==5||m==7) {value2 = true;}
        else
        {
            if(m%2==0||m%3==0||m%5==0||m%7==0) {value2 = false;}
            else {value2 = true;}
        }
    }
    else {value2 = false;}

    if(value1==true&&value2==true) 
    {
        for(int i=n+1; i<=m; i++)
        {
        if(i==2||i==3||i==5||i==7) {value3 = true;}
        else
        {
            if(i%2==0||i%3==0||i%5==0||i%7==0) {value3 = false;}
            else {value3 = true;}
        }

        if(value3==true)
        {
            if(i==m) {cout<<"YES"; break;}
            else {cout<<"NO"; break;}
        }
        }
    }
    else {cout<<"NO";}
    
    return 0;
}