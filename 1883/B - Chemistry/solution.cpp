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
    // vector<int> a(n);
    // for(auto&x:a){cin>>x;}
    string s;cin>>s;
//    int freq[26]={0};
 
    unordered_map<char,int> freq;
    for(int i=0;i<n;i++){
        freq[s[i]]++;
    }
    int count=0;   
    for(auto&[x,f]:freq){
        if(f&1){
            count+=1;
        }
    }
    if(count>k+1){
        cout<<"No
";
    }else{
        cout<<"Yes
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