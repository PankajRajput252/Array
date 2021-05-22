#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cout<<"Enter number of customer."<<endl;
    cin>>n;
    int a[n],temp;
    temp=a[0];
    cout<<"Enter the customers id :";
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
     int rept=0;
     for(int j=i;j<n;j++)
     {
         if(a[i]==a[j])
         {
             rept++;
         }
     }
         if(rept>count)
         {
            count=rept;
            temp=a[i];
         }
     
    }
    cout<<" The most visited customer is "<<temp<<" with count ="<<count;
    return 0;
}