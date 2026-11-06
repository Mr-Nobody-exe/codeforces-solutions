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
    int ones=0;
    for(auto&x:a){
        cin>>x;
        if(x==1){
            ones++;
        }
    }
    int mones=n-ones;
    if(ones==mones){
        cout<<"YES
";
    }else{
        if(abs(ones-mones) %4 !=0){
            cout<<"NO
";
        }else{
            cout<<"YES
";
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