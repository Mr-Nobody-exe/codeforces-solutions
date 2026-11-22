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
    int n,k;cin>>n>>k;
 
    vector<int> a(n);
    for(auto&x:a){
        cin>>x;
    }
 
    int ans = 0;
    // bool f=false;
    // for(int i=0;i<k;i++){
    //     set<int> s;
    //     f=false;
    //     for(int j=i;j<=n-k+i;j++){
    //         s.insert(a[j]);
 
    //         if(s.size()>1){
    //             f=true;
    //             break;
    //         }
    //     }
    //     // cout<<"s : [ ";
    //     // for(auto&x:s){
    //     //     cout<<x<<" ";
    //     // }
    //     // cout<<"]
";
    //     if(f){
    //         continue;
    //     }else{
    //         ans++;
    //     }
    // }
 
    unordered_map<int,int> freq;
    for(int i=0;i<=n-k;i++){
        freq[a[i]]++;
    }
    if(freq.size()==1){
        ans++;
    }
    for(int i=1;i<k;i++){
        freq[a[i-1]]--;
        if(freq[a[i-1]]<=0){
            freq.erase(a[i-1]);
        }
        freq[a[i+n-k]]++;
        if(freq.size()>1){
            continue;
        }else{
            ans++;
        }
    }
    cout<<ans<<"
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