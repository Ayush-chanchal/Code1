#include<iostream>
using namespace std;

int main()
{
    int arr[10]={1,2,0,1,2,0,0,2,2,1};
    int n=10;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                swap(arr[j],arr[i]);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}