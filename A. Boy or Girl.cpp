#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string dane;
    cin>>dane;
    int distinct=0;
 
    sort(dane.begin(), dane.end());
 
    for(int i=0; i<dane.length(); i++)
    {
        if(dane[i]!=dane[i+1]) {distinct++;}
    }
 
    if(distinct%2==0) {cout<<"CHAT WITH HER!";}
    else {cout<<"IGNORE HIM!";}
 
    return 0;
}