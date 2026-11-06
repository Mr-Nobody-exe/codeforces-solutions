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
    string s;cin>>s;
    vector<int> a,b;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            a.push_back(i+1);
        }else{
            b.push_back(i+1);
        }
    }
    if(a.size()==1){
        cout<<"0
";
    }else if(a.size()==2){
        cout<<"1
";
    }else{
        sort(a.begin(),a.end());
        cout<<a.back()-a.front()<<"
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