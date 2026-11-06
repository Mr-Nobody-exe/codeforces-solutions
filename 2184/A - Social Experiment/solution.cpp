#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
typedef __int128_t i128;
 
#define endl "
"
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
 
 
void solve() {
    int n;cin>>n;
    if(n>=4){
        cout<<n%2<<"
";return;
    }else{
        cout<<n<<"
";return;
    }
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
    cerr << "Mr.Nobody was here.
Time measured: " << elapsed.count() * 1e-9 << " seconds.
"; 
    return 0;
}