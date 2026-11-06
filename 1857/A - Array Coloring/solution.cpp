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
    bool odd = false,even = false;
    int sum =0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]&1){
            odd = true;
        }else{
            even = true;
        }
        sum+=a[i];
    }
    if(sum&1){
        cout<<"No
";
    }else{
        // if(odd){
        //     cout<<"Yes
";
        // }else{
 
        // }
        cout<<"Yes
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