#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    bool value = false;
    string tab[n];

    for(int i=0; i<n; i++)
    {
        cin>>tab[i];
        if(value == false)
        {
            if(tab[i][0]=='O'&&tab[i][1]=='O') {value = true; tab[i][0] = '+'; tab[i][1] = '+';}
        }
        if(value == false)
        {
            if(tab[i][3]=='O'&&tab[i][4]=='O') {value = true; tab[i][3] = '+'; tab[i][4] = '+';}
        }
    }
    if(value == true) 
    {
        cout<<"YES"<<endl;
        for(int i=0; i<n; i++)
        {
        cout<<tab[i]<<endl;
        }
    }
    else {cout<<"NO"<<endl;}

    return 0;
}


