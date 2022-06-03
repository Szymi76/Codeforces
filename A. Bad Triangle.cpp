#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin>>t;

    for(int s=0; s<t; s++) {

        int n,value = 0;
        cin>>n;

        vector< pair<int, int> > v;

        for(int i=0; i<n; i++) {
            cin>>value;
            v.push_back(make_pair(value, i));
        }
        
        sort(v.begin(), v.end());

        if(v[0].first + v[1].first > v[v.size()-1].first) {cout<<"-1";}
        else {cout<<v[0].second+1<<" "<<v[1].second+1<<" "<<v[v.size()-1].second+1;}
        cout<<endl;
    }

    return 0;
}