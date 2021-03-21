#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
   int n;
   cin>>n;
   long long a[n],ct=0;
   for(int i=0;i<n;i++)
   {
       scanf("%lld",&a[i]);
   }
   for(int i=1;i<n;i++)
   {
       if(a[i]>=a[i-1])
       continue;
       else
       {
           long long q=a[i-1]-a[i];
           a[i]=a[i-1];
           ct+=q;
       }
   }
   cout<<ct;
}