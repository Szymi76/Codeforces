#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n;
    cin>>t;

    for(int s=0; s<t; s++)
    {
        cin>>n;
        int a;
        float sum = 0;

        for(int i=0; i<n; i++)
        {
            cin>>a;
            sum+=a;
        }
        if(sum/n==1.0) {cout<<"0"<<endl;}
        else if(sum>1&&sum-n>0) {cout<<sum-n<<endl;}
        else {cout<<"1"<<endl;}  
    }

    return 0;
}


