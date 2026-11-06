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
    int a,b;cin>>a>>b;
    int xk,yk,xq,yq;cin>>xk>>yk>>xq>>yq;
    int dx[] = {a,a,b,-b,-a,-a,-b,b};
    int dy[] = {-b,b,a,a,b,-b,-a,-a};
    set<pair<int,int>> ans;
    for(int i=0;i<8;i++){
        int x = xk + dx[i];
        int y = yk + dy[i];
        if((abs(x-xq)==a && abs(y-yq)==b)||(abs(x-xq)==b && abs(y-yq)==a)){
            ans.insert({x,y});
        }
    }
    ans.insert({xk,yk});ans.insert({xq,yq});
    // for(auto&[x,y]:ans){
    //     cout<<x<<" "<<y<<"	";
    // }
    cout<<ans.size()-2<<"
";
 
    // if((xk == xq)||(yk == yq)){
    //     if(abs(xk-xq) == 2*a || abs(xk-xq) == 2*b || abs(yk-yq) == 2*a || abs(yk-yq) == 2*b){
    //         cout<<"1
";
    //     }else{
    //         cout<<"0
";
    //     }
    // }else{
    //     int val = abs(xk-xq)+abs(yk-yq);
    //     if(val == (2*a) || val == (2*b) || val == 2*(a+b) || val == 2*(abs(a-b))){
    //         cout<<"2
";
    //     }else{
    //         cout<<"0
";
    //     }
    // }
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