#include<iostream>
 
using namespace std;
typedef long long ll;
 
void solve(){
    ll n,m;cin>>n>>m;
    ll x[n],y[n];
 
    for(ll i=0;i<n;i++){
        cin>>x[i]>>y[i];
    }
    x[0]=y[0]=m;
 
    ll peri=0;
 
    for(ll i=0;i<n;i++){
        peri+=(x[i]+y[i]);
    }
 
    peri*=2;
 
    cout<<peri<<"
";
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int t;cin>>t;
 
    while(t--){
        solve();
    }
 
    return 0;
}