#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int n;
    cin>>n;
    int p=0;
    while(n--)
    {
 
        int sum=0;
        for(int i=0;i<3;i++)
        {
            int a;
            cin>>a;
            sum+=a;
            
            
        }
        if(sum>1)
        {
            p++;
        }
        
    }
    cout<<p;
    return 0;
}