#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,a,b,c;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        cin>>a>>b>>c;  
        int roznica = 0;
        if(a>b) {roznica = a-b;}
        else {roznica = b-a;}
        int d1 = c + roznica, d2 = c - roznica;
        
        if(a<=2*roznica&&b<=2*roznica&&c<=2*roznica)
        {
            if(d1>0&&d1<=2*roznica&&d1!=a&&d1!=b&&d1!=c) {cout<<d1;}
            else if(d2>0&&d2<=2*roznica&&d2!=a&&d2!=b&&d2!=c) {cout<<d2;}
            else {cout<<"-1";}
        }
        else {cout<<"-1";}
        cout<<endl;
    }
    
    return 0;
}


