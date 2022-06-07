#include <bits/stdc++.h>

using namespace std;

vector<int> subArr(vector<int> arr, int start, int amount) {
    vector<int> result;

    for(int i=start; i<start+amount; i++) {
        result.push_back(arr[i]);
    }

    return result;
} 

int main () {

    int n,m,input,diff,tmp;
    cin>>n>>m;

    vector<int> arr;

    for(int i=0; i<m; i++) {
        cin>>input;
        arr.push_back(input);
    }
    
    sort(arr.begin(), arr.end());

    for(int i=0; i<(m-n+1); i++) {
        vector<int> sub = subArr(arr,i,n);
        int l = sub.size();

        sort(sub.begin(), sub.end());
        tmp = sub[l-1] - sub[0]; 
        if(tmp < diff || i == 0) { diff = tmp ;}
    }

    cout<<diff;

    return 0;
}