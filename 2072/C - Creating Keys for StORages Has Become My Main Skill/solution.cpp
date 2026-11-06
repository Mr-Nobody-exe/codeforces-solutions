#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
 
void solve(){
    ll n,x;cin>>n>>x;
    ll ans=0;ll mex=0;
    std::vector<ll> a(n) ;
    for(ll i=0;i<n-1;i++){
        if((i&x)==i){
            a[i]=i;
            ans|=i;
            mex++;
        }else{
            a[i]=0;
        }
    }
    if((mex|ans)==x){
        a[n-1]=mex;
    }else{
        a[n-1]=(x^ans);
    }
    for(auto it : a){
        cout<<it<<" ";
    }
    cout<<"
";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	// your code goes here
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    solve();
	}
}