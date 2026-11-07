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
    int n;cin>>n;
    vector<ll> a(n);
    ll sum=0;
    for(auto&x:a){cin>>x;x=1<<x;sum+=x;}
    sort(a.begin(),a.end());
    // vector<ll> pre(n+1);
    // pre[0]=0;
    // ll diff = LLONG_MAX;
    // ll curr;
    // for(int i=1;i<=n;i++){
    //     pre[i] = pre[i-1]+a[i-1];
    //     curr = abs(sum - (2* pre[i]));
    //     diff = min(diff,curr);
    // }
    // ll ans = ((sum+diff)*(sum-diff))/4;
    ll curr = 0;
    ll ans = curr ;
    ll target = sum/2;
    for(int i=n-1;i>=0;i--){
        if(curr+a[i]<=target){
            curr+=a[i];
        }
    }
    cout<<curr*(sum-curr)<<"
"; 
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