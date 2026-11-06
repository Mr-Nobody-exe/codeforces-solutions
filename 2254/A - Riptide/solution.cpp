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
    int a[3];
    for(int i=0;i<3;i++){
        cin>>a[i];
    }
    int ans = 0;
    while(a[0]!=a[1] && a[1]!=a[2] && a[0]!=a[2]){
        sort(a,a+3);
        ans++;
        a[0]++;
        a[2]--;
    }
    cout<<ans<<"
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