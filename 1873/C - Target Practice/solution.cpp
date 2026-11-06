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
int point(int x,int y){
    for(int i=0;i<5;i++){
        if(x==i || y==i || x==(9-i) || y == (9-i)){
            return i+1;
        }
    }
    return -1;
}
void solve() {
 
    int ans = 0;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            char c;cin>>c;
            if(c=='X'){
                ans+=point(i,j);
            }
        }
    }    
    cout<<ans<<"
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