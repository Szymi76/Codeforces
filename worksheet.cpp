#include <bits/stdc++.h>

using namespace std;

int main()
{
    string dane;
    cin>>dane;

    int len = dane.length();
    char tab[len];

    // vector<char> v;

    for(int i=0; i<len; i++) {
        tab[i] = dane[i];
    }
    // for(int i=0; i<len; i++) {
    //     if(dane[i] == 'W' && dane[i+1] == 'U' && )
    // }

    for(int i=0; i<len; i++) {
        // cout<<"test";
        string sub = dane.substr(i,3);
        // cout<<sub<<endl;
        if(sub == "WUB") {
            dane.replace(i,3,"---");
        }
    }

    dane+="-";
    // string test = dane.substr(0,3);
    cout<<dane;

    
    int count = 0;
    string result = "";
    for(int i=0; i<len+1; i++) {
        if(dane[i] != '-') {
            count++;
        }
        else {
            result+=dane.substr(i-count, count);
            if(count > 0) {result+=" ";}
            count = 0;
        }
    }

    cout<<result;
    return 0;
}


