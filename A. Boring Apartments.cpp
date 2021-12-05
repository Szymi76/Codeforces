#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n;
    cin>>t;

    for(int i=0; i<t; i++)
    {   
        cin>>n;
        int x=1,num=0,sum=0;
        
        while(num!=n)
        {
            string ciag;
            num=0;
            
            for(int j=1; j<5; j++)
            {
                string pom = to_string(x);
                ciag+=pom;
                istringstream(ciag) >> num;
                sum+=j;
                if(num==n) {break;} 
            }
            x++;
        }
        cout<<sum<<endl;
    }

    return 0;
    
}