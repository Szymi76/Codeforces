#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    bool right = false;
    int n,p,q;
    cin>>n;
 
    vector<pair <int,int> > arr;
 
    for(int i=0; i<n; i++) {
        cin>>p>>q;
        arr.push_back(make_pair(p,q));
    }
 
    sort(arr.begin(), arr.end());
 
    int start = 0;
 
    for(int i=0; i<n; i++) {
 
        if(arr[i].first != arr[i].second) { break ;}
        start++; 
    }
 
    for(int i=n-1; i>=0; i--) {
        if(arr[start].first < arr[i].first && arr[start].second > arr[i].second) { right = true ;}
    }
 
    if(right == true) { cout<<"Happy Alex" ;}
    else { cout<<"Poor Alex" ;}
 
    return 0;
}