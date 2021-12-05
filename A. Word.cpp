#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string slowo;
    cin>>slowo;
    int duze_litery=0,male_litery=0;
 
    char znak;
    
    for(int i=0; i<slowo.length(); i++)
    {
        znak = slowo[i];
        if(int(znak)<97) {duze_litery++;}
        else {male_litery++;}
    }
    if(duze_litery>male_litery)
    {
        for_each(slowo.begin(), slowo.end(), [] (char & c){
            c = ::toupper(c);
        });
    }
    else
    {
        for_each(slowo.begin(), slowo.end(), [] (char & c){
            c = ::tolower(c);
        });
    }
    cout<<slowo;
 
    return 0;
}