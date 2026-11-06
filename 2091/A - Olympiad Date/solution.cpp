#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
#define endl "
";
 
 
void solve() {
    int n;cin>>n;
    int digits[10]={3,1,2,1,0,1,0,0,0,0};
    // int zeros=3,ones=1;twos=2;threes=1,fives=1;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        digits[a[i]]--;
        if((digits[0]<=0)&&(digits[1]<=0)&&(digits[2]<=0)&&(digits[3]<=0)&&(digits[5]<=0)){
            cout<<i+1<<"
";
            return;
        }
        
    }
    cout<<0<<"
";
    return;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // your code goes here
 
    int t;
    cin >> t;
 
    while (t--)
    {
        solve();
    }
}