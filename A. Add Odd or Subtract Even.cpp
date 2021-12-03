#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0; i<t; i++)
    {   
        int a,b,moves=0;
        cin>>a>>b;

        while(a!=b)
        {
            if(a<b)
            {
                if((b-a)%2!=0) {a+=b-a;}
                else {a+=(b-a)-1;}
            }
            else
            {
                if((a-b)%2==0) {a-=a-b;}
                else {a-=a-b+1;}
            }
            moves++;
        }
        cout<<moves<<endl;
    }

    return 0;
}