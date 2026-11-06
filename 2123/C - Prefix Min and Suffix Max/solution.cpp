#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
typedef __int128_t i128;
 
#define endl "
"
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
 
void solve() {
    ll n;cin>>n;
    vector<ll> a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    vector<ll> prefix(n),suffix(n);
    prefix[0]=a[0];
    suffix[n-1]=a[n-1];
    for(ll i=1;i<n;i++){
        prefix[i]=min(prefix[i-1],a[i]);
        suffix[n-i-1]=max(suffix[n-i],a[n-i-1]);
    }
 
    if(n==2){
        cout<<"11
";
        return;
    }
 
    string ans;
    for(ll i=0;i<n;i++){
        if(prefix[i]==a[i]||suffix[i]==a[i]){
            ans+="1";
        }else{
            ans+="0";
        }
    }
    
    cout<<ans<<"
";
    return;
}
 
int32_t main() {
    auto begin = std::chrono::high_resolution_clock::now();    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // your code goes here
 
    int t;
    cin >> t;
 
    while (t--)
    {
        solve();
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.
"; 
    return 0;
}