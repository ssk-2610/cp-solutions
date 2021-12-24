#include <bits/stdc++.h>
#define ll long long int
#define ld long double
using namespace std;
const ll mod = 1e9 + 7;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define inp(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define out(a,n) for(int i=0;i<n;i++){cout<<a[i]<<" ";}

int main()
{
    IOS;
    int a,c=0,d=0;
    cin>>a;
    int b[a];
    for(int i=0;i<a;i++){
    cin>>b[i];
    if(b[i]>=b[i-1])c++;
    else c=1;
    d=max(d,c);
    }
    cout <<d<<" ";
    
}