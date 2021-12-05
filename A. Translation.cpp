#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string slowo1,slowo2,slowo_rev;
    int pom=0;
    cin>>slowo1>>slowo2;
 
    for(int i=slowo1.length()-1; i>=0; i--)
    {
        if(slowo1[i]!=slowo2[pom]) {cout<<"NO"; exit(0);}
        pom++;
    }
    cout<<"YES";
 
    return 0;
}