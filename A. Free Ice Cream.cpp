#include <iostream>
 
using namespace std;
 
int main() {
 
    long long n,x,distress = 0;
    cin>>n>>x;
 
    for(int s=0; s<n; s++) {
        char decision;
        int d;
 
        cin>>decision>>d;
        
        if(decision == '+') {x+=d;}
        else if(decision == '-' && d<=x) {x-=d;}
        else {distress++;}
    }
 
    cout<<x<<" "<<distress;
 
    return 0;
}