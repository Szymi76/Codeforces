#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n,problem=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        if(a==1) {problem++;}
    }
    if(problem>0) {cout<<"HARD";}
    else {cout<<"EASY";}
 
    return 0;
}