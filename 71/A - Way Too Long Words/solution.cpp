#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
    
        int n=s.size();
    
        if(n>10)
        {
            cout<<s[0]<<n-2<<s[n-1]<<"
";
            continue;
        }
        else
        {
            cout<<s<<"
";
            continue;
        }
    }
    
    return 0;
}