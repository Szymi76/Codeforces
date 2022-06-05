#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,min = 0, count = 0, suma = 0;
    cin>>n;

    int tab[n];

    for(int i=0; i<n; i++) {
        cin>>tab[i];
        min+=tab[i];
    }

    min = min/2;
    sort(tab, tab + n);
    int index = n-1;

    while(suma <= min) {
        suma+=tab[index];
        count++;
        index--;
    }

    cout<<count;

    return 0;
}


