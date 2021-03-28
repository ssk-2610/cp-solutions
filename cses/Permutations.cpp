#include <bits/stdc++.h>
#define lli long long int
#define li long int
#define ld long double
using namespace std;
const lli mod = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    if(n==1)
    {
        cout<<'1';
    }
    else if(n>3)
    {
        for(int i=1;i<=n;i++)
        {
            if(i%2==0)
            cout<<i<<' ';
        }
        for(int i=1;i<=n;i++)
        {
            if(i%2!=0)
            cout<<i<<' ';
        }
    }
    else
    {
        cout<<"NO SOLUTION";
    }
    return 0;
}