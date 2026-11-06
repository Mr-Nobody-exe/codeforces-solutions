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
    int counter=0,maxi= INT_MIN;
    for(int i=0;i<n;i++){
        if(s[i]=='#'){
            counter++;
 
        }else{
            counter=0;
        }
        maxi = max(maxi,counter);        
    }
    cout<<(maxi+1)/2<<"
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