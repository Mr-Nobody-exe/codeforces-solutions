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
    ll n;cin>>n;
    string a,b;cin>>a>>b;
    if(n==1 || n==2){
        if(a==b){
            cout<<"0
";
        }else{
            cout<<"-1
";
        }
        return;
    }
    vector<ll> aOddOnes,bOddOnes,aEvenOnes,bEvenOnes;
    for(ll i=0;i<n;i+=2){
        if(a[i]=='1'){
            aEvenOnes.push_back(i);
        }
        if(b[i]=='1'){
            bEvenOnes.push_back(i);
        }
    }
    for(ll i=1;i<n;i+=2){
        if(a[i]=='1'){
            aOddOnes.push_back(i);
        }
        if(b[i]=='1'){
            bOddOnes.push_back(i);
        }
    }
    if(aEvenOnes.size()==bEvenOnes.size() && aOddOnes.size()==bOddOnes.size()){
        ll ans=0;
        ll n1=aEvenOnes.size();
        ll n2=aOddOnes.size();
        for(ll i=0;i<n1;i++){
            ans+=abs(aEvenOnes[i]-bEvenOnes[i]);
        }
        for(ll i=0;i<n2;i++){
            ans+=abs(aOddOnes[i]-bOddOnes[i]);
        }
        cout<<ans/2<<"
";
    }else{
        cout<<"-1
";
    }
    return;
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