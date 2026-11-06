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
    string a,b;cin>>a>>b;
    if(n==1 || n==2){
        if(a==b){
            cout<<"YES
";
        }else{
            cout<<"NO
";
        }
        return;
    }
    int aOddZeros=0,aEvenZeros=0;
    int bOddZeros=0,bEvenZeros=0;
    for(int i=0;i<n;i++){
        if(a[i]=='0'){
            if(i&1){
                aOddZeros++;
            }else{
                aEvenZeros++;
            }
        }
        if(b[i]=='0'){
            if(i&1){
                bOddZeros++;
            }else{
                bEvenZeros++;
            }
        }
    }
    if(aOddZeros==bOddZeros && aEvenZeros==bEvenZeros){
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