#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string dane;
    getline(cin,dane);
    set<char> c;
 
    for(int i=0; i<dane.length(); i++)
    {
        if(isalpha(dane[i])) {c.insert(dane[i]);}
    }
    cout<<c.size();
 
    return 0;
}