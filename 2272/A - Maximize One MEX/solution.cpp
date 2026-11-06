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
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    set<int> b(a.begin(),a.begin()+n-k+1);
    // cout<<"
[";
    // for(auto&x:b){
    //     cout<<x<<"|";
    // }cout<<"]
";    
    int mex = 0;
    while(b.count(mex)){
        mex++;
    }
    if(mex==n-k+1){
        cout<<"-1
";
    }else{
        int idx = find(a.begin(),a.end(),mex)-a.begin();
        int idx2 = find(a.begin(),a.end(),*b.rbegin())-a.begin();
        cout<<idx2+1<<" "<<idx+1<<"
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