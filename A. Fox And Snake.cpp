#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n,m,pom=1;
    cin>>n>>m;

    for(int i=1; i<=n; i++)
    {
        if(i%2!=0)
        {
            for(int j=0; j<m; j++)
            {
                cout<<"#";
            }
            cout<<endl;
        }
        else
        {
            if(pom%2!=0)
            {   
                for(int j=0; j<m-1; j++)
                {
                    cout<<".";
                }
                cout<<"#"<<endl;
                pom++;
            }
            else
            {
                cout<<"#";
                for(int j=1; j<m; j++)
                {
                    cout<<".";
                }
                cout<<endl;
                pom++;
            }
        }
    }

    return 0;
}