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
    vector<int> a(n);
    unordered_map<int,int> freq;
    for(auto&x:a){
        cin>>x;
        freq[x]++;
    }
    if(freq.size()>2){
        cout<<"NO
";
    }else if(freq.size() == 1){
        cout<<"YES
";
    }else{
        auto it = freq.begin();
        int a = (*it).second;
        it++;
        int b = (*it).second;
        if(a==n/2 || b==n/2){
            cout<<"YES
";
        }else{
            cout<<"NO
";
        }
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