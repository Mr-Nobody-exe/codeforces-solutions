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
    int k;cin>>k;
    vector<int> a(k);
    bool f1=false,f2=false,f3=false;
    for(auto& x:a){
        cin>>x;
        if(x>2){
            f3=true;
        }
        if(x==2){
            if(f1){
                f2=true;
            }else{
                f1=true;
            }
        }
    }
    if(f3 || (f1 && f2)){
        cout<<"Yes
";
    }else{
        cout<<"No
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