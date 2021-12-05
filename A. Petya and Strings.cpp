#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
   string slowo1,slowo2;
   cin>>slowo1;
   cin>>slowo2;
 
   for_each(slowo1.begin(), slowo1.end(), [](char & c) {
       c = ::tolower(c);
   });
 
   for_each(slowo2.begin(), slowo2.end(), [](char & c) {
       c = ::tolower(c);
   });
 
   for(int i=0; i<slowo1.length(); i++)
   {
       if(slowo1[i]!=slowo2[i])
       {
           char pom1 = slowo1[i];
           char pom2 = slowo2[i];
 
           if(int(pom1)<int(pom2))
           {
               cout<<"-1"<<endl;
               exit(0);
           }
           else if(int(pom1)>int(pom2))
           {
               cout<<"1"<<endl;
               exit(0);
           }
       }
   }
   cout<<"0"<<endl;
    return 0;
    
}