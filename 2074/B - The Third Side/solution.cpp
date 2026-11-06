#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
#define endl "
";
 
 
void solve() {
    ll n;cin>>n;
    ll sum=(-n+1);
    for(int i=0;i<n;i++){
        ll a;cin>>a;
        sum+=a;
    }
    cout<<sum<<"
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