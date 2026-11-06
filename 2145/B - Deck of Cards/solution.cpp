#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
//typedef __int128_t i128;
 
#define endl "
"
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
 
void solve() {
    int n,k;cin>>n>>k;
    string s;cin>>s;
    int top=0,bottom=0,uncertain=0;
    for(int i=0;i<k;i++){
        if(s[i]=='0'){
            top++;
        }else if(s[i]=='1'){
            bottom++;
        }else{
            uncertain++;
        }
    }
    if(k>=n){
        string ans(n,'-');
        cout<<ans<<"
";
        return;
    }else{
        string ans1(top,'-');
        string ans2(bottom,'-');
        string mid;
        if(n-top-bottom-(2*uncertain)>0){
            string ans3(n-top-bottom-(2*uncertain),'+');
            string ans4(uncertain,'?');
            mid = ans4 + ans3 + ans4;
        }else{
            string ans3(n-top-bottom,'?');
            mid = ans3;
        }
        cout<<ans1+mid+ans2<<"
";
        return;
    }
}
 
int32_t main() {
    auto begin = std::chrono::high_resolution_clock::now();    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int t;
    cin >> t;
 
    while (t--)
    {
        solve();
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Mr.Nobody was here.
Time measured: " << elapsed.count() * 1e-9 << " seconds.
"; 
    return 0;
}