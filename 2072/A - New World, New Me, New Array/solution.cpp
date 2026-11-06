#include<iostream>
#include<cmath>
 
using namespace std;
 
void solve(){
    int n,k,p;cin>>n>>k>>p;
    if(k==0){
        cout<<0<<"
";
        return;
    }else if(abs(k)>(n*abs(p))){
        cout<<-1<<"
";
        return;
    }else{
        if(k%p==0){
            cout<<abs(k/p)<<"
";
            return;
        }else{
            cout<<int(abs(k/p))+1<<"
";
            return;
        }
    }
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}