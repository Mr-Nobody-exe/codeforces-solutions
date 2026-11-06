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
 
int gcd(int a,int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}
 
/* --------- Solve Function --------- */
void solve() {
    int n,x,y;cin>>n>>x>>y;
    int g = gcd(x,y);
    vector<int> a(n),diff(n);
    bool flag=true;
    for(int i=0;i<n;i++){
        cin>>a[i];
        diff[i] = abs(a[i]-i-1);
        if(diff[i]%g != 0){
            flag = false;
        }
    }
    if(flag){
        cout<<"YES
";
    }else{
        cout<<"NO
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