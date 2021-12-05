#include <iostream>
 
using namespace std;
 
int main()
{
    int n,k,pom=0;
    
    cin>>n>>k;
 
    int tab[n];
 
    for(int i=0; i<n; i++)
    {
        cin>>tab[i];
        
        if(i<k)
        {
            if(tab[i]!=0)
            {
                pom++; 
            }
            
        }
        else 
        {
            if(tab[i]!=0)
            {
                if(tab[i]==tab[i-1])
                {
                    pom++;
                }
                else
                {
                    break;
                }
            }  
            
        }
 
    }
 
    cout<<pom<<endl;
    return 0;
    
}