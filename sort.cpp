#include<iostream>
using namespace std;
int sort(int n,int *arr)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
    {
        if(arr[i]>arr[j])
        {
            int temp;
            temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
            
        }
    }
    }
    return 0;
}
int main()
{
     int n;
    cout<<"Enter size of array "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter array "<<endl;
    for(int i=0;i<n;i++)
    {
          cin>>arr[i];
        
       
    }
    sort(n, arr);
    cout<<"sorted array"<<endl;
    for(int i=0;i<n;i++)
    {
        
          cout<<arr[i]<<" ";
        
       
    }
}