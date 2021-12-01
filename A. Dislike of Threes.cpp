#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,k;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        cin>>k;
        int num=0,r=0;

        for(int j=0; j<k+r; j++)
        {
            num++;
            string string_num = to_string(num);
            if(j==0||j==1) {r=r;}
            else if(num%3==0||string_num[string_num.length()-1]=='3') {r++;}
        }
        cout<<num<<endl;
    }
    return 0;
}