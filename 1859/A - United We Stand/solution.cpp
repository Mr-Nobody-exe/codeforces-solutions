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
    for(auto&x:a){cin>>x;}
    vector<int> b,c;
    int mx = *max_element(a.begin(),a.end());
    for(int i=0;i<n;i++){
        if(a[i]==mx){
            c.push_back(a[i]);
        }else{
            b.push_back(a[i]);
        }
    }
    if(b.size()!=0){
        cout<<b.size()<<" "<<c.size()<<"
";
        for(auto&bi:b){cout<<bi<<" ";}
        cout<<"
";
        for(auto&ci:c){cout<<ci<<" ";}
        cout<<"
";
    }else{
        cout<<"-1
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