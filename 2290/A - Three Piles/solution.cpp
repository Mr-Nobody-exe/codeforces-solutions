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
    int a,b,c;cin>>a>>b>>c;
    int x = max({a,b,c});
    int y = min({a,b,c});
    int z = a+b+c-x-y;
    if(x==y+2 && x-1==z){
        cout<<"YES
";
    }else{
        cout<<"NO
";
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