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
    vector<int> a(n);
    for(auto &x : a)cin>>x;
    int ones=0;
    for(int i=0;i<n;i++){
        if(a[i]==1){
            ones++;
        }
    }
    int zeros = n - ones;
    if(ones>=zeros){
        cout<<"Bessie
";
    }else{
        cout<<"Elsie
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