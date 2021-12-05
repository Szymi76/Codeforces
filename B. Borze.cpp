#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string ciag;
    cin>>ciag;
    int n=0;

    while(n<ciag.length())
    {
        if(ciag[n]=='.') {cout<<"0"; n++;}
        else
        {
            if(ciag[n+1]=='.') {cout<<"1"; n+=2;}
            else {cout<<"2"; n+=2;}
        }
    }

    return 0;
    
}