#include<iostream>
using namespace std;

int binarysearch(int arr[],int n,int key)
{
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    int f=0;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            cout<<"\nKey found:"<<arr[mid]<<"\nposition:"<<mid;
            f++;
            break;
        }
        else if(arr[mid]<key)
        {
            start=mid+1;
        }
        else if(arr[mid]>key)
        {
            end=mid-1;
        }
       
        mid=start+(end-start)/2;
    }

    if(f==0)
    {
        cout<<"Key Not Found!"<<endl;
    }
}

int main()
{
    int arr[5]={1,2,3,4,5};
    int brr[6]={10,11,12,13,14,15};
    binarysearch(arr,5,14);
    binarysearch(brr,6,14);
}