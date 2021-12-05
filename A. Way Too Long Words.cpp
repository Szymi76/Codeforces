#include <iostream>
 
using namespace std;
 
int main()
{
    string slowo;
    int n;
 
    cin>>n;
 
    for(int i=0; i<n; i++)
    {
        cin>>slowo;
 
        if(slowo.length()>10)
        {
            cout<<slowo[0]<<slowo.length()-2<<slowo[slowo.length()-1]<<endl;
        }
        else
        {
            cout<<slowo<<endl;
        }
    }
 
    return 0;
}