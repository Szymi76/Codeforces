#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int tab[5][5];
    int ruchy = 0,x,y;
 
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cin>>tab[i][j];
            if(tab[i][j]==1)
            {
                y = i;
                x = j;
            }
        }
    }
    while(y!=2||x!=2)
    {
        if(y>2) {y--;}
        else if(y<2) {y++;}
        else if(x>2) {x--;}
        else if(x<2) {x++;}
        ruchy++;  
    }
    cout<<ruchy<<endl;
    return 0;
    
}