#include<iostream>
using namespace std;
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
    int min=arr[0],max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
         max=arr[i];
        }
        else if(arr[i]<min){
            min=arr[i];
        }
    }

cout<<"Max and Min value: "<<endl;
    int output[2]={max,min};
    for(int i=0;i<2;i++)
    {
 cout<<output[i]<<" ";
    }
   

}