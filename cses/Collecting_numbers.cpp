#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const ll mod = 1e9 + 7;

int main()
{
    int n;
    cin>>n;
    vector< pair<int,int> > a;
    for(int i=0;i<n;i++)
    {
        int w;
        cin >> w;
        a.push_back(make_pair(w,i));
    }
    sort(a.begin(),a.end());
    int ct=1;
    for(int i=1;i<n;i++)
    {
        if(a[i].second>a[i-1].second)
        continue;
        else
        {
            ct+=1;
        }
    }
    cout << ct;
}