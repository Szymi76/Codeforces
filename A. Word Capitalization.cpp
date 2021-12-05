#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string slowo;
    char pom;
    cin>>slowo;
    pom = slowo[0];
    pom = toupper(pom);
    slowo[0] = pom;
    cout<<slowo;
    
    return 0;
    
}