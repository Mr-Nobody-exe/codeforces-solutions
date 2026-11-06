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
    int x,y,r;cin>>x>>y>>r;
    for(int i=x-r;i<=x+r;i++){
        for(int j=y-r;j<=y+r;j++){
            int exp = (x-i)*(x-i) + (y-j)*(y-j);
            if(exp == r*r){
                cout<<i<<" "<<j<<"
";return;
            }
        }
    }
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