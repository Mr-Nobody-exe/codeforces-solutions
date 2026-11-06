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
    vector<ll> a(n);
    ll sum =0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    if(sum< ((n*(n+1))/2)){
        cout<<"NO
";return;
    }
    ll runningSum=0;
    for(ll i=0;i<n;i++){
        runningSum+=a[i];
        runningSum -= (i+1);
        if(runningSum<0){
            cout<<"NO
";return;
        }
    }
    cout<<"YES
";return;
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