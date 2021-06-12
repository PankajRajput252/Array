/*//using Bruteforce approach
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],maxsum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        { 
           int s=0;
          for(int k=0;k<=j;k++)
          {
              s=s+a[k];
          }
          maxsum=max(maxsum,s);
        }

    }
    cout<<maxsum;
}
*/
//using Kadane's algorithm(commulative sum)
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],cum_sum=0,maxsum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
     cum_sum=cum_sum+a[i];
     if(cum_sum<0)
     {
         cum_sum=0;
     }
     maxsum=max(maxsum,cum_sum);
    }
    cout<<maxsum;
}
