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
 
ll sum(ll x){
    return (x*(x+1))/2;
}
ll sumab(ll a,ll b){
    return sum(b)-sum(a);
}
/* --------- Solve Function --------- */
void solve() {
    ll n,k,x;cin>>n>>k>>x;
    if(k==1){
        if(x>n){
            cout<<"NO
";
        }else{
            cout<<"YES
";
        }
        return;
    }    
    ll upl = sum(n)-sum(n-k);
    ll lol = sum(k);
    if(x>upl || x<lol){
        cout<<"NO
";
    }else{
        cout<<"YES
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