#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        string ciag;
        cin>>ciag;

        for(int j=0; j<ciag.length(); j=j+2)
        {
            if(ciag.length()==j+2)
            {
                cout<<ciag.substr(j,2);
                break;
            }
            cout<<ciag.substr(j,1);
        }
        cout<<endl;
    }

    return 0;
}