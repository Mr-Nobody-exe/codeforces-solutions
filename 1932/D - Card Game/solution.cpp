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
    char trump; cin>>trump;
    string suites = "CDHS";
    unordered_map<char,vector<int>> pile;
    vector<int> c,d,h,s;
    // // string ts;cin>>ts;
    // int len = ts.size();
    // for(int i=1;i<len;i++){
    //     if(ts[i]=='C'||ts[i]=='D'||ts[i]=='H'||ts[i]=='S'){
    //         pile[ts[i]].push_back((int)(ts[i-1]-'0'));
    //     }
    // }
 
    string card;
    for (int i = 0; i < 2*n; i++) {
        cin >> card;
 
        char suit = card[1];
        int rank = card[0] - '0';
 
        pile[suit].push_back(rank);
    }    
 
    int tr = pile[trump].size();
    int count = 0;
    for(auto& x : pile){
        sort(x.second.begin(),x.second.end());
        if(x.first == trump){
            continue;
        }else{
            count += ((x.second.size())%2);
        }
    }
    if(count> tr){
        cout<<"IMPOSSIBLE
";return;
    }else{
        auto it = pile[trump].begin();
        for(auto& x:pile){
            if(x.first == trump){
                continue;
            }else{
                int sz = x.second.size();
                for(int i=0;i<sz-1;i+=2){
                    cout<<x.second[i]<<x.first<<" "<<x.second[i+1]<<x.first<<"
";
                }
                if(sz&1){
                    cout<<x.second[sz-1]<<x.first<<" "<<*it<<trump<<"
";
                    it++;
                }
            }
        }
        while(it!=pile[trump].end()){
            cout<<*it<<trump<<" "<<*(it+1)<<trump<<"
";
            it+=2;
        }
        return;
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