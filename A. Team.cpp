#include <iostream>
 
using namespace std;
 
int main()
{
   int n,x=0;
 
   cin>>n;
 
   for(int i=0; i<n; i++)
   {
       int a,b,c;
       cin>>a>>b>>c;
       
       if(a==1&&b==1)
       {
           x++;
       }
       else if(a==1&&c==1)
       {
           x++;
       }
       else if(b==1&&c==1)
       {
           x++;
       } 
   }
   cout<<x<<endl;
 
    return 0;
}