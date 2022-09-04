#include <bits/stdc++.h>

using namespace std;

int main() {

    int n,q,inp;
    cin>>n;
    vector<int> arr;

    for(int i=0; i<n; i++) {
        cin>>inp;
        arr.push_back(inp);
    }

    sort(arr.begin(), arr.end());

    cin>>q;
    for(int i=0; i<q; i++) {
        cin>>inp;
        vector<int>::iterator count = upper_bound(arr.begin(), arr.end(), inp);
        cout<<(count - arr.begin())<<endl;
    }

    return 0;
}
