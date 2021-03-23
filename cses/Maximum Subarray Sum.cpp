#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007;
 
int main()
{
   int n;
   cin>>n;
   long long a[n];
   for(int i=0;i<n;i++)
   {
       scanf("%lld",&a[i]);
   }
   long long sofar=INT_MIN,here=0;
   for(int i=0;i<n;i++)
   {
       here=here+a[i];
       if(sofar<here)
       sofar=here;
       if(here<0)
       here=0;
   }
   cout<<sofar;
}