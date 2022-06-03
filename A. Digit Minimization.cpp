#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
int t;
cin>>t;
 
for(int s = 0; s<t; s++) {
    int result;
    string n;
    cin>>n;
    vector<int> num = {};
 
    for(int i=0; i<n.length(); i++) {
       
        stringstream tmp;
        int tmpNum;
        tmp << n[i];
        tmp >> tmpNum;
 
        num.push_back( tmpNum );
    }
 
    if(num.size() == 1) {
        result = num[0];
    } else if(num.size() == 2) {
        result = num[1];
    } else {
        result = num[0];
        for(int i : num) {
            if(i < result) { result = i; };
        }
    }
 
    cout<<result<<endl;
}
 
    return 0;
}