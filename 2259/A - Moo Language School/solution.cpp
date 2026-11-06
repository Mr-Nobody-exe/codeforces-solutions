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
    int n,k;cin>>n>>k;
    int f = n/k;
    int ans = 0;
    string s;cin>>s;
    for(int i=0;i<n;i+=k){
        int a = 1;
        for(int j=i;j<i+k;j++){
            a&=(int)s[j]-'0';
        }
        if(a == 1){
            ans++;
        }
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