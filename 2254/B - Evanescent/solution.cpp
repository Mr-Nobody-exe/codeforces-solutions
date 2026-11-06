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
    int f1=-1,f2=-1;
    for(int i=1;i<n-1;i++){
        if(s[i]!=s[i-1] && s[i]!=s[i+1]){
            f1=i;
            if(s[i-1]==s[i+1]){
                f2=i;
                break;
            }
        }
    }
    if(f2!=-1){
        s.erase(f2,1);
    }else if(f1!=-1){
        s.erase(f1,1);
    }
    int ans=0;
    int i;
    // cout<<s<<"
";
    for(i=0;i<s.size()-1;i++){
        if(s[i]!=s[i+1]){
            ans++;
        }
    }
    cout<<ans+1<<"
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