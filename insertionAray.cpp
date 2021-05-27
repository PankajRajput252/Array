#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cap;
     cout<<"Enter capacity of array";
    cin>>cap;
    cout<<"Enter array size";
    cin>>n;
    int a[cap],pos,element,ind;
    cout<<"Enter arrays elements.";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter element to insert.";
    cin>>element;
     cout<<"Enter position to insert";
    cin>>pos;
    if(n==cap)
    {
        cout<<"Array doesn't have enough space to insert.";
    }
    else{
       ind=pos-1;
       for(int i=n-1;i>=ind;i--)
       {
       a[i+1]=a[i];
       }
       a[ind]=element;
       n++;
       for(int i=0;i<n;i++)
       {
           cout<<a[i]<<" ";
       }
    }
   return 0;
}    