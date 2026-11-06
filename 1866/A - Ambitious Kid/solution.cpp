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
    int ans = INT_MAX;
    for(int i=0;i<n;i++){
        int a;cin>>a;
        ans = min (ans, abs(a));
    }
    cout<<ans<<"
";
}
 
/* --------- Main --------- */
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t=1;
    //cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}