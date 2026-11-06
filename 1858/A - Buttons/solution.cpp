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
    // int n;cin>>n;
    int a,b,c;cin>>a>>b>>c;
    if(c&1){
        if(a>=b){
            cout<<"First";
        }else{
            cout<<"Second";
        }
    }else{
        if(a>b){
            cout<<"First";
        }else{
            cout<<"Second";
        }
    }
    cout<<"
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