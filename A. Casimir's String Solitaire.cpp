#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        string dane;
        cin>>dane;
        int num=0;

        for(int j=0; j<dane.length(); j++)
        {
            for(int l=0; l<dane.length(); l++)
            {
                if(j!=l)
                {
                    if((dane[l]=='A'||dane[l]=='C')&&dane[j]=='B')
                    {
                        dane[l] = 0;
                        dane[j] = 0;
                        num++;
                    }
                }
            }
        }
        if(num==dane.length()/2&&dane.length()%2==0) {cout<<"YES"<<endl;}
        else {cout<<"NO"<<endl;}
    }
    
    return 0;
}