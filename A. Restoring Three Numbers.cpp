#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    long long int x1,x2,x3,x4;
    cin>>x1>>x2>>x3>>x4;
    long long int tab[4] = {x1,x2,x3,x4};
    sort(tab,tab+4);
    x1 = tab[0]; x2 = tab[1]; x3 = tab[2]; x4 = tab[3];
    long double a=0,b=0,c=0;
    
    TEST1:
       a=0,b=0,c=0;

       a = (x1+x2-x3)/2;
       if(a-(long int)(a)!=0||a<0) {goto TEST2;}
       c = (x2+x3-x1)/2;
       if(c-(long int)(c)!=0||c<0) {goto TEST2;}
       b = x4-a-c;
       if(b-(long int)(b)!=0||b<0) {goto TEST2;}

       cout<< fixed << setprecision(0) <<a<<" ";
       cout<< fixed << setprecision(0) <<b<<" ";
       cout<< fixed << setprecision(0) <<c<<" ";
       exit(0);
        
    TEST2:
       a=0,b=0,c=0;

       a = (x1+x3-x2)/2;
       if(a-(long int)(a)!=0||a<0) {goto TEST3;}
       c = (x2+x1-x3)/2;
       if(c-(long int)(c)!=0||c<0) {goto TEST3;}
       b = x4-a-c;
       if(b-(long int)(b)!=0||b<0) {goto TEST3;}

       cout<< fixed << setprecision(0) <<a<<" ";
       cout<< fixed << setprecision(0) <<b<<" ";
       cout<< fixed << setprecision(0) <<c<<" ";
       exit(0);

    TEST3:
       a=0,b=0,c=0;

       a = (x2+x3-x1)/2;
       c = (x1+x3-x2)/2;
       b = x4-a-c;

       cout<< fixed << setprecision(0) <<a<<" ";
       cout<< fixed << setprecision(0) <<b<<" ";
       cout<< fixed << setprecision(0) <<c<<" ";
       exit(0);
    
    return 0;
}