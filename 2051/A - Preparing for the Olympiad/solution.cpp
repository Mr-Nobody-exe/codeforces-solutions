#include<iostream>
 
using namespace std;
 
void solve(){
 
    int n;cin>>n;
    
    int a[n],b[n];
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
 
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
 
    int m=0,s=0;
    int diff=0;
 
    for(int i=0;i<n-1;i++){
        if(a[i]>b[i+1]){
            diff+=(a[i]-b[i+1]);
        }
    }
    diff+=a[n-1];
 
    cout<<diff<<"
";
}
 
int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;cin>>t;
 
    while(t--){
 
 
        solve();
    }
 
    return 0;
}