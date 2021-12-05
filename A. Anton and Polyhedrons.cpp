#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n,suma=0;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        string ksztalt;
        cin>>ksztalt;
        if(ksztalt=="Tetrahedron") {suma+=4;}
        else if(ksztalt=="Cube") {suma+=6;}
        else if(ksztalt=="Octahedron") {suma+=8;}
        else if(ksztalt=="Dodecahedron") {suma+=12;}
        else if(ksztalt=="Icosahedron") {suma+=20;}
    }
    cout<<suma;

    return 0;
}