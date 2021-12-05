#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int x=0,n;
    string operacja;
    cin>>n;
 
    for(int i=0; i<n; i++)
    {
        cin>>operacja;
        if(operacja[1]=='+')
        {
            x++;
        }
        else
        {
            x--;
        }
       
    }
    cout<<x<<endl;
 
 
    return 0;
    
}