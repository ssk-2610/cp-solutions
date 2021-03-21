#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007;
 
int main()
{
   long long n;
   cin>>n;
   long long w=5;
   int ct=0;
   while(w<=n)
   {
       long long qw=n/w;
       ct+=qw;
       w=w*5;
   }
   cout<<ct;
}