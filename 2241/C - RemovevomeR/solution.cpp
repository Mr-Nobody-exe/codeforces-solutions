#include <bits/stdc++.h>
using namespace std;
 
/* --------- Fast Typedefs --------- */
using ll = long long;
using i128 = __int128_t;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
 
/* --------- Constants --------- */
static const ll MOD = 1000000007;
static const ll INF = 1e18;
 
/* --------- Macros --------- */
#define endl '
'
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define ff first
#define ss second
 
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
 
/* --------- Debug --------- */
void __print(int x) { cerr << x; }
void __print(long x) { cerr << x; }
void __print(long long x) { cerr << x; }
void __print(unsigned x) { cerr << x; }
void __print(unsigned long x) { cerr << x; }
void __print(unsigned long long x) { cerr << x; }
void __print(float x) { cerr << x; }
void __print(double x) { cerr << x; }
void __print(long double x) { cerr << x; }
void __print(char x) { cerr << '\'' << x << '\''; }
void __print(const char *x) { cerr << '\"' << x << '\"'; }
void __print(const string &x) { cerr << '\"' << x << '\"'; }
void __print(bool x) { cerr << (x ? "true" : "false"); }
 
template<typename T, typename V>
void __print(const pair<T, V> &x) {
    cerr << '{';
    __print(x.ff);
    cerr << ',';
    __print(x.ss);
    cerr << '}';
}
 
template<typename T>
void __print(const T &x) {
    int f = 0;
    cerr << '{';
    for (auto &i : x)
        cerr << (f++ ? "," : ""), __print(i);
    cerr << '}';
}
 
void _print() { cerr << "]
"; }
 
template<typename T, typename... V>
void _print(T t, V... v) {
    __print(t);
    if (sizeof...(v)) cerr << ", ";
    _print(v...);
}
 
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
 
 
 
/* --------- Solve Function --------- */
void solve() {
    int n;cin>>n;
    string s;cin>>s;
    int count=0;
    for(int i=0;i<n-1;i++){
        if(s[i]!=s[i+1]){
            count++;
        }
    } 
 
    cout << (count == 1 ? 2 : 1) <<"
";
    
}
 
/* --------- Main --------- */
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    auto begin = chrono::high_resolution_clock::now();
 
    int t = 1;
    cin >> t;
 
    while (t--) {
        solve();
    }
 
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
 
#ifndef ONLINE_JUDGE
    cerr << "Mr.Nobody was here.
Time measured: "
         << elapsed.count() * 1e-9
         << " seconds.
";
#endif
 
    return 0;
}