#include <bits/stdc++.h>

using namespace std;

int main()
{
int n,bills=0;
cin>>n;

while(n>=1)
{
    if(n>=100){n = n-100; bills++;}
    else if(n>=20&&n<100){n = n-20; bills++;}
    else if(n>=10&&n<20){n = n-10; bills++;}
    else if(n>=5&&n<10){n = n-5; bills++; }
    else {n = n-1; bills++;}
}
cout<<bills;
 
 

return 0;
}