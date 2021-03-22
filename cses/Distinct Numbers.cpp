#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main()
{
    int n;
    cin>>n;
    set<long long> a;
    for(int i=0;i<n;i++)
    {
        long long w;
        scanf("%lld",&w);
        a.insert(w);
    }
    cout<<a.size();
}