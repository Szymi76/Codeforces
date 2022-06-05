#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,count = 0, prev = 0, result = 0;
    cin>>n;

    for(int i=0; i<n; i++) {
        cin>>a;

        if(a >= prev) { count++ ;}
        else { count = 1 ;}

        if(count > result) { result = count ;}
        prev = a;
    }

    cout<<result;

    return 0;
}


