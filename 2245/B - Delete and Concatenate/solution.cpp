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
    int n,c;cin>>n>>c;
    vector<ll> a(n);
    for(auto&x:a){cin>>x;x-=c;}
    sort(a.begin(),a.end());
    for(int i=0;i<n/2;i++){
        a[i] = max(0LL,a[i]);
    }
    ll ans = 0LL;
    for(auto&x:a){
        ans+=x;
    }
    cout<<ans<<"
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