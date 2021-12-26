#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,moves = 0;
    string startLock,endLock;
    cin>>n>>startLock>>endLock;

    for(int i=0; i<n; i++)
    {
        char startZnak = startLock[i];
        char endZnak = endLock[i];
        int startNum = int(startZnak - 48);
        int endNum = int(endZnak - 48);

        if(startNum==0) {startNum = 10;}
        if(endNum==0) {endNum = 10;}

        if(endNum>startNum) 
        {
            if(endNum - startNum >5) {moves+=10 - (endNum - startNum);}
            else {moves+=endNum - startNum;}
        }
        else 
        {
            if(startNum - endNum >5) {moves+=10 - (startNum - endNum);}
            else {moves+=startNum - endNum;}
        }
    }
    cout<<moves;

    return 0;
}


