#include<iostream>
#include<vector>
 
using namespace std;
typedef long long ll;
 
void solve(){
    ll n,m;cin>>n>>m;
    cout<<(max(m,n)+1)<<"
";
}
 
int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int t;cin>>t;
 
    while(t--){
        solve();
    }
}