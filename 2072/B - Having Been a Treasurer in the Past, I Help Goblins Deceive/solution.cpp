#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void solve(){
    ll n;cin>>n;
    string s;cin>>s;
    if(n<3){
        cout<<0<<"
";
        return;
    }else if(n==3){
        if(s=="--_"||s=="-_-"||s=="_--"){
            cout<<1<<"
";
            return;
        }else{
            cout<<0<<"
";
            return;
        }
    }
    ll hyphen=count(s.begin(),s.end(),'-');
    ll underscore=n-hyphen;
    ll ans=((hyphen+1)/2)*underscore*(hyphen/2);
    cout<<ans<<"
";return;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}