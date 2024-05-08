#include<iostream>
using namespace std;
 int binary(int n,int arr[],int key )
 {
    int s=0,e=n-1;
    int mid=(s+e)/2;
    if(n==1)
    {
        if(arr[s]==key)
        return s;
        else
        return -1;
    }
    else{
        while(s<=e)
        {
            if(arr[mid]==key)
            {
                return mid;
            }
            else if(arr[mid]<key)
            {
            s=mid+1;
            }
            else{
             e=mid-1;
            }
             mid=(s+e)/2;
        }
        
    }
   return -1;
 }

int main()
{
    int n,key,res;
    cout<<"Enter size of array "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter array "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter key to be searched"<<endl;
    cin>>key;
 res= binary(n,arr,key);
 cout<<"BINARYSEARCH: "<<res<<endl;
 return 0;
}