#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,target,indicator=0;
    cin>>n;
    int a[n],ar[100];
    cout<<"Enter the arrays elements.";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the target sum.";
    cin>>target;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {    
           int sum=0;
            for(int k=i;k<=j;k++)
            {
                sum=sum+a[k];
            }
            if(sum==target)
            {
                cout<<"adding subarray element target sum is possible";
                indicator++;
        }
            cout<<endl;
        }
        cout<<endl;
    }
    if(indicator==0)
    {
         cout<<"adding subarray element target sum is not possible";
    } 
   

}