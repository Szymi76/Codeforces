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
        if(n>0&&n<10) {cout<<n<<endl;}
        else
        {
            int s=1;
            int num = 11;
            int result = 0;
            int x=11;
            string pom1 = "1";

            while(x<=n)
            {
                if(s==9)
                {
                    x+=num+1;
                    string pom = to_string(num);
                    pom = pom + pom1;
                    istringstream(pom) >> num;
                    s = 0;
                }
                else
                {
                    x+=num;
                }
            s++;
            result++;
            }
            cout<<result+9<<endl;
        }
    }

    return 0;
    
}