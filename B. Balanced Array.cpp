#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        int n;
        cin>>n;
        if((n/2)%2!=0||n==2) {cout<<"NO"<<endl;}
        else
        {
            cout<<"YES"<<endl;
            int even=2,suma=0,odd=1,suma1=0;;
            for(int j=1; j<=n/2; j++)
            {
                suma+=even;
                cout<<even<<" ";
                even+=2;   
            }
            for(int j=0; j<(n/2)-1; j++)
            {
                suma1+=odd;
                cout<<odd<<" ";
                odd+=2;
            }
            cout<<suma-suma1<<endl;
        }
    }

    return 0;
}