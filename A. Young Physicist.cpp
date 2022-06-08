#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, input, x = 0, y = 0, z = 0;
    cin>>n;

    for(int i=0; i<n; i++) {
        cin>>input;
        x+=input;
        cin>>input;
        y+=input;
        cin>>input;
        z+=input;
    }

    if(x == 0 && y == 0 && z == 0) { cout<<"YES" ;}
    else { cout<<"NO" ;}


    return 0;
}