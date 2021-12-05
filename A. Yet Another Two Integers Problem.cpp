#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        int a,b,c=0,ruchy=0;
        cin>>a>>b;

        if(a<b)
        {   
            c = b-a;
            ruchy = c/10;
            c = c-(ruchy*10);
            if(c!=0) {ruchy++;}
        }
        else
        {
            c = a-b;
            ruchy = c/10;
            c = c-(ruchy*10);
            if(c!=0) {ruchy++;}
        }
        cout<<ruchy<<endl;
    }

    return 0;
}