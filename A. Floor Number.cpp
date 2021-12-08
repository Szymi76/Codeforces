#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t,n,x;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        int sum = 0, floor = 0;
        cin>>n>>x;

        while(sum<n)
        {
            if(sum==0) {sum+=2;}
            else {sum+=x;}
            floor++;
        }
        cout<<floor<<endl;
    }

    return 0;
}