#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007;
 
int main()
{
   int n;
   cin>>n;
   long long qw=1;
   for(int i=0;i<n;i++)
   {
       qw=(2*(qw%1000000007))%MOD;
   }
   cout<<qw;
}