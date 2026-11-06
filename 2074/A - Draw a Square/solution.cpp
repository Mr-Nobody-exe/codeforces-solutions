#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
#define endl "
";
 
 
void solve() {
    int l,r,d,u;cin>>l>>r>>d>>u;
    if(l-r==0 && d-u==0 && abs(l)==abs(d)){
        cout<<"Yes
";
    }else{
        cout<<"No
";
    }
    return;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // your code goes here
 
    int t;
    cin >> t;
 
    while (t--)
    {
        solve();
    }
}