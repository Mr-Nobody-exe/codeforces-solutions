#include <bits/stdc++.h>
using namespace std;
 
/* --------- Fast Typedefs --------- */
using ll = long long;
 
/* --------- Constants --------- */
static const ll MOD = 1000000007;
static const ll INF = 1e18;
 
/* --------- Fast IO --------- */
#define endl '
'
 
/* --------- Solve Function --------- */
void solve() {
    ll n;cin>>n;
    ll k;cin>>k;
    if(n==1){
        if(k==1){
            cout<<"YES
0
";
        }else{
            cout<<"NO
";
        }
        return;
    }
    k^=n;
    if(k==0){
        cout<<"YES
";
        for(ll i=1;i<n;i++){
            cout<<i<<" ";
        }
        cout<<"0
";
    }else if(k<n){
        cout<<"YES
";
        for(ll i=1;i<n;i++){
            if(i==k){
                continue;
            }
            cout<<i<<" ";
        }
        cout<<"0 "<<k<<"
";
    }else{
        int msb_k = 63 - __builtin_clzll(k);
        int msb_n1 = 63 - __builtin_clzll(n-1);
 
        if(msb_k>msb_n1){
            cout<<"NO
";return;
        }
 
        int skip = k^(n-1);
        cout<<"YES
";
        for(int i=1;i<n-1;i++){
            if(i==skip){
                continue;
            }
            cout<<i<<" ";
        }
        cout<<"0 "<<skip<<" "<<n-1<<"
";  
    }
    return;
}
 
/* --------- Main --------- */
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}