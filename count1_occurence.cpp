#include<bits/stdc++.h>
using namespace std;
int count_occurance(int a[],int n)
{
    int mid,l=0,h=n-1;     
   while(l<=h)
    {
        mid=(l+h)/2;
         if(a[mid]==0)
           l=mid+1;
        else 
        {
          if(a[mid-1]!=a[mid] || mid==0)
            return (n-mid);
        else
           h=mid-1;
       }
    }
    return 0;
}
int main()
{
    int n;
    cin>> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int t=count_occurance(a,n);
    //int t=rec_fir_occ(a,0,n-1,k);
    cout<<t<<" ";
}