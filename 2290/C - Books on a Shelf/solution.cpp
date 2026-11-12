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
    map<int,int,greater<int>> freq;
    for(int i=0;i<n;i++){
        cin>>a[i];
        freq[a[i]]++;
    }
    int maxi;
    vector<int> ans,ans1;
    bool f = true;
    for(auto&[x,y]:freq){
        if(f){
            ans1.push_back(x);
            if(y>1){
                for(int i=0;i<y-1;i++){
                    ans.push_back(x);
                }
            }
            maxi = x;
            f=false;
        }else{
            ans1.push_back(x);
            if(y>1){
                for(int i=0;i<y-1;i++){
                    ans.push_back(x);
                }
            }
        }
    }
    reverse(ans.begin(),ans.end());
    for(auto&x:ans1){
        ans.push_back(x);
    }
    int k=0;
    int l=1,m=1;
    for(int i=0;i<n-1;i++){
        if(ans[i]<ans[i+1]){
            l++;
        }
    }
    for(int i=n-1;i>0;i--){
        if(ans[i-1]>ans[i]){
            m++;
        }
    }
    
    // if(l==0){
    //     k++;
    // }
    // if(m==0){
    //     k++;
    // }
 
    k+=l+m;
    if(freq[maxi]==1){
        k--;
    }
    cout<<k<<"
";
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<"
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