#include <bits/stdc++.h>

using namespace std;

int main() {

    string str, str1 = "", str2 = "", str3 = "", str4 = "";
    cin>>str;

    for(int i=0; i<str.length(); i++) {
        str2+=toupper(str[i]);
        str4+=tolower(str[i]);
        if(i == 0) { 
            str1+=tolower(str[i]);
            str3+=toupper(str[i]);    
        }
        else { 
            str1+=toupper(str[i]);
            str3+=tolower(str[i]);
        }
    }

    if(str == str1) { cout<<str3 ;}
    else if(str == str2) { cout<<str4 ;}
    else { cout<<str ;}

    return 0;
}
