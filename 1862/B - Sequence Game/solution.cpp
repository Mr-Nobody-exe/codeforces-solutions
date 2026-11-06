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
    vector<int> ans;
    vector<int> b(n);
    for(auto&x:b)cin>>x;
    int prev = b[0];
    ans.push_back(b[0]);
    for(int i=1;i<n;i++){
        if(b[i]>=b[i-1]){
            ans.push_back(b[i]);
        }else{
            ans.push_back(b[i]);
            ans.push_back(b[i]);
        }
    }
    cout<<ans.size()<<"
";
    for(auto&x:ans){
        cout<<x<<" ";
    }
    cout<<"
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