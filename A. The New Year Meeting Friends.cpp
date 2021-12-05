#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x1,x2,x3,distance=0;
    
    cin>>x1>>x2>>x3;
    int tab[3] = {x1,x2,x3};

    sort(tab,tab+3);
    x1 = tab[0]; x2 = tab[1]; x3 = tab[2];

    distance = x2-x1;
    distance+=x3-x2;

    cout<<distance;

    return 0;
    
}