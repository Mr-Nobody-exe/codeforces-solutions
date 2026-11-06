#include <iostream>
 
using namespace std;
typedef long long ll;
 
void solve(){
 
    ll n,a,b,c;cin>>n>>a>>b>>c;
    ll mod=(n%(a+b+c));
    
    if(mod==0){
        cout<<(3*(n/(a+b+c)))<<"
";
    }
    else if(mod>(a+b)){
        cout<<(3*(n/(a+b+c)))+3<<"
";
    }else if(mod>a && mod<=(a+b)){
        cout<<(3*(n/(a+b+c)))+2<<"
";
    }else if(mod<=a){
        cout<<(3*(n/(a+b+c)))+1<<"
";
    }
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;cin>>t;
 
    while(t--){
        solve();
    }
}