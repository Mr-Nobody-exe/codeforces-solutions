#include <bits/stdc++.h>
using namespace std;
 
/* --------- Fast Typedefs --------- */
using ll = long long;
using i128 = __int128_t;
 
/* --------- Constants --------- */
static const ll MOD = 1000000007;   // 1e9 + 7
static const ll INF = 1e18;
 
/* --------- Fast IO --------- */
#define endl '
'
 
/* --------- Random Generator --------- */
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
 
/* --------- Utility Functions --------- */
ll mod_add(ll a, ll b) { return (a + b) % MOD; }
ll mod_sub(ll a, ll b) { return (a - b + MOD) % MOD; }
ll mod_mul(ll a, ll b) { return (a * b) % MOD; }
 
ll mod_pow(ll base, ll exp) {
    ll res = 1;
    while (exp) {
        if (exp & 1) res = mod_mul(res, base);
        base = mod_mul(base, base);
        exp >>= 1;
    }
    return res;
}
 
/* --------- Solve Function --------- */
void solve() {
    // your logic here
    int n,k,m;cin>>n>>k>>m;
    if(k>m){
        cout<<"no
";
    }else{
        cout<<"yes
"<<m-k+1<<" ";
        for(int i=1;i<n;i++){
            cout<<"1 ";
        }
        cout<<"
";
    }
    
}
 
/* --------- Main --------- */
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    auto begin = chrono::high_resolution_clock::now();
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
 
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
 
    cerr << "Mr.Nobody was here.
Time measured: "
         << elapsed.count() * 1e-9 << " seconds.
";
 
    return 0;
}