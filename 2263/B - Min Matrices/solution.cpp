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
    if(k > ((2*n)-1) || k < n){
        cout<<"-1
";
    }else{
        vector<vector<int>> ans(n,vector<int>(n,0));
        int a = 1;
        for(int i=0;i<(2*n)-k;i++){
            ans[i][i]=a++;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(ans[i][j]==0){
                    ans[i][j]=a++;
                }
                cout<<ans[i][j]<<" ";
            }
            cout<<"
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