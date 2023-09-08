#include<iostream>
using namespace std;

int pivot1(int arr[],int n)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e)
    {
        if(arr[mid]>=arr[0])
        {
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}

void bsearch(int arr[],int s,int e,int k)
{
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        if(k<arr[mid])
        {
            e=mid-1;
        }
        else if(k>arr[mid])
        {
            s=mid-1;
        }
        else if(k==arr[mid]){
            cout<<"Key "<<arr[mid]<<" found at position "<<mid;
            break;
        }
    }
}

int main()
{
    int arr[5]={1,2,3,4,5};
    int k=2;
    int pivot=pivot1(arr,5);
    if(k>=arr[pivot]&&k<=arr[5-1])
    {
        bsearch(arr,pivot,5-1,k);
    }
    else{
        bsearch(arr,0,pivot,k);
    }

}