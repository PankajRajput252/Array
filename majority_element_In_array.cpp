/* #include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,max_ele=0;
    cin>>n;
    int a[n],p[5];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {    
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(a[i]==a[j])
            count++;
        }
        max_ele=max(max_ele,count);
        p[0]=a[i];
    }
    if(max_ele>(n/2))
    cout<<p[0]<<" has majority element with count= "<<max_ele;
    else
    cout<<" Majority element is not found."; 
    
} */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],majority_ele,count=0,ans_index=0;
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    {  
        if(a[i]==a[ans_index])
        {
            count++;
        }
        else{
            count--;
        }
       if(count==0)
       {    
           ans_index=i;
           count++;
       }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==a[ans_index])
        {
            majority_ele++;
        }
    }
     if(majority_ele >(n/2))
    cout<<" has majority element with count= "<<majority_ele;
    else
    cout<<" Majority element is not found."; 

}