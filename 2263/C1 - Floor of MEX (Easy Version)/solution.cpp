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
    for(auto&x:a)cin>>x;
    vector<int> diff(n+1,0);
    int m = n ;
    for(int i=0;i<n;i++){
        int l = a[i]*(i+1);
        int r = l +i;
        if(l>=n){
            continue;
        }
        r= min(r,n-1);
        diff[l]++;
        diff[r+1]--;
    }
    vector<int> ans;
    int curr = 0;
    for(int i=0;i<n;i++){
        curr +=diff[i];
        if(curr == 0){
            ans.push_back(i);
        }
    }    
    cout<<ans.size()<<"
";
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
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