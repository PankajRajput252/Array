#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter array size";
    cin>>n;
    int a[n],key,ind,flag=0;
    cout<<"Enter arrays elements.";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter element to delete.";
    cin>>key;
    for(int i=0;i<n;i++)
    {
       if(a[i]==key)
       {
           ind=i;   //position of element
           n--;
           flag=1;  //it indicate loop is executed and element is found in index
           break;
       }
    }
    if(flag==1)   //loop for deleting element
    {
       for(int j=ind;j<n;j++)
        {
         a[j]=a[j+1];    
         } 
     for(int i=0;i<n;i++)
      {
        cout<<a[i]<<endl;
      }
    }
    else  // if elment is not found
    {
        cout<<"Element not found";
    }
   
     
}    