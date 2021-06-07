#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n;
    cout<<"enter the size of array";
    cin>>n;
    int a[10],r=0,l=n-1;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    { 
       
        if(r>=l)
        {
            break;
        }
        else{
            swap(a[r],a[l]);
             r=r+1;
             l=l-1;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }

    
}