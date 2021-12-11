#include <bits/stdc++.h>

using namespace std;

int main()
{
    string dane;
    cin>>dane;
    int sum = 0, dlg = dane.length()-1;

    if(dane.length()==1) {dlg++;}

    for(int i=0; i<dlg; i++)
    {
        int pom1 = 26 - abs(int('a'-dane[0]));
        int pom2 = abs(int('a'-dane[0]));
        if(i==0) 
        {
            if(pom1<pom2) {sum+=pom1;}
            else {sum+=pom2;}  
        }
        char znak1 = dane[i];
        char znak2 = dane[i+1];
        int num = abs(znak1-znak2);
        if(26-num<num) {sum+=26-num;}
        else {sum+=num;}
    }

    if(dane.length()==1)
    {
        int pom1 = abs(0 - char('a'-dane[0]));
        int pom2 = abs(1 - char('z'-dane[0]));
        
        if(pom1<pom2) {cout<<pom1;}
        else {cout<<pom2;}
    } 
    else {cout<<sum;}
    
    return 0;
}