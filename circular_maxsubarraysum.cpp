#include<bits/stdc++.h>
using namespace std;
int kadane(int a[],int n)
{
   int cum_sum=0,maxsum=0;
  for(int i=0;i<n;i++)
    {
     cum_sum=cum_sum+a[i];
     if(cum_sum<0)
     {
         cum_sum=0;
     }
     maxsum=max(maxsum,cum_sum);
    }
    return maxsum;
}
int main()
{
    int n,sumtotal=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
   int nonwrap=kadane(a,n);
   for(int i=0;i<n;i++)
   {
      sumtotal=sumtotal+a[i];
      a[i]=-a[i];
   }
   int wrap=sumtotal + kadane(a,n);
   cout<<max(wrap,nonwrap);
}