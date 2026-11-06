#include<iostream>
#include <vector>
 
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;cin>>t;
 
    while(t--){
        string a;cin>>a;
    
        int n=a.size();
 
        vector<char> b(n);
        
        for(int i=0;i<n;i++){
            if(a[i]=='p'){
                b[n-1-i]='q';
            }else if(a[i]=='q'){
                b[n-1-i]='p';
            }else{
                b[n-1-i]='w';
            }
 
        }
        
        for(int i=0;i<n;i++){
            cout<<b[i];
        }
        
        cout<<"
";
 
    }
 
    return 0;
}