#include <bits/stdc++.h>
#define ll long long int
#define li long int
#define ld long double
using namespace std;
const ll mod = 1e9 + 7;
 
int main()
{
    int n,x,ct=0;
    cin >> n >> x;
    ll a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    sort(a,a+n);
    int i=0,j=n-1;
    while(i<=j)
    {   
        if(i==j)
        {
            ct+=1;
            break;
        }
        if(a[i]+a[j]<=x)
        {
            i+=1;
            j-=1;
            ct+=1;
        }
        else
        {
            j-=1;
            ct+=1;
        }
    }
    cout<<ct;
}