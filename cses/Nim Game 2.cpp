#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define F first
#define S second
 
const int inf = 1LL<<62;
const int md = 1000000007;
 
void solve(){
    int n; cin>>n;
    int x = 0;
    for (int i = 0; i < n; i++) {
        int a; cin>>a;
        x^=(a%4);
    }
    if (x) cout<<"first";
    else cout<<"second";
}    
signed main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    cout.tie(0);
    int t=1;
    cin>>t;
    for (int i = 1; i <= t; i++) {
        solve();
        cout<<'\n';
    }
}