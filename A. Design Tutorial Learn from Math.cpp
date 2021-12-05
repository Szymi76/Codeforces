#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n,pom1=0;
    cin>>n;
    int pom = n/2;

    if(2*pom==n) 
    {
        pom1 = pom;
    }
    else
    {
        pom1 = pom+1;
    }
        bool value = false;
        while(value==false)
        {
            if((pom%2==0||pom%3==0||pom%5==0)&&(pom1%2==0||pom1%3==0||pom1%5==0)&&(pom!=2&&pom!=3&&pom!=5&&pom1!=2&&pom1!=3&&pom1!=5)) {value=true;}
            else 
            {
                pom--;
                pom1++;
                value = false;
                if(pom<0) {break;}
            }
        }
        cout<<pom<<" "<<pom1;

    return 0;
}