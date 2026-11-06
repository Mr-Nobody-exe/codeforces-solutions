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
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int mindiff = INT_MAX;
    for(int i=1;i<n;i++){
        if(a[i]<a[i-1]){
            cout<<"0
";return;
        }else{
            int diff = a[i]-a[i-1];
            mindiff = min(diff,mindiff);
        }
    }
    cout<<(mindiff/2)+1<<"
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