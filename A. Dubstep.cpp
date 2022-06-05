#include <bits/stdc++.h>

using namespace std;


string replaceWith(string str, string leave) {
    int len = str.length();
    int l = leave.length();

    string replacer = "";
    for(int i=0; i<l; i++) { replacer+="-" ;}

    for(int i=0; i<len; i++) {
        string sub = str.substr(i,l);
        if(sub == leave) { str.replace(i,l,replacer) ;}
    }

    str+="-";
    int count = 0;
    string result = "";

    for(int i=0; i<len+1; i++) {
        if(str[i] != '-') { count++ ;}
        else {
            if(count > 0) { result+=str.substr(i-count, count) + ' ' ;}
            count = 0;
        }
    }

    return result;
}

int main()
{   
    string str;
    cin>>str;

    string result = replaceWith(str,"WUB");
    cout<<result;

    return 0;
}


