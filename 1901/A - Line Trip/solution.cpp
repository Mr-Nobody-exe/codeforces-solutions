#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n,x;cin>>n>>x;
    int a=0,b=0,ans=0;
    for(int i=0;i<n;i++){
        cin>>a;
        ans = max(ans,a-b);
        b=a;
    }
    ans=max(ans,2*(x-a));
    cout<<ans<<"
";
}
 
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}