#include<iostream>
 
using namespace std;
typedef long long ll;
 
int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;cin>>t;
 
    while(t--){
        ll m,a,b,c;cin>>m>>a>>b>>c;
        if(m-a<=0 && m-b<=0){
            cout<<2*m<<"
";
        }else if(m-a>0 && m-b<=0){
            if((m-a)<=c){
                cout<<2*m<<"
";
            }else{
                cout<<m+a+c<<"
";
            }
        }else if(m-a<=0 && m-b>0){
            if((m-b)<=c){
                cout<<2*m<<"
";
            }else{
                cout<<m+b+c<<"
";
            }
        }else if(m-a>0 && m-b>0){
            if((m-a+m-b)<=c){
                cout<<2*m<<"
";
            }else{
                cout<<a+b+c<<"
";
            }
        }
    }
 
    return 0;
}