#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
typedef __int128_t i128;
 
#define endl "
"
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
 
void solve() {
    int n, x;
    cin >> n >> x;
    vector < int > a(n);
    for (auto & d: a) {
        cin >> d;
    }
    int open = ranges::count(a, 0);
    int closed = n - open;
    if(closed==1){
        cout<<"YES
";
        return;
    }
    int l,r;
    for(int i=0;i<n;i++){
        if(a[i]==1){
            l=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(a[i]==1){
            r=i;
            break;
        }
    }
    if(x>=(r-l+1)){
        cout<<"YES
";
    }else{
        cout<<"NO
";
    }
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
    auto elapsed = std::chrono::duration_cast < std::chrono::nanoseconds > (end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.
";
    return 0;
}