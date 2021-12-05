#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int y,w,num=6;
    cin>>y>>w;

    if(y>w) {y = 6-y+1;}
    else {y = 6-w+1;}

    if(y%6==0) {cout<<y/6<<"/"<<num/6;}
    else if(y%2==0) {cout<<y/2<<"/"<<num/2;} 
    else if(y%3==0) {cout<<y/3<<"/"<<num/3;} 
    else {cout<<y<<"/"<<num;}
    
    return 0;
}