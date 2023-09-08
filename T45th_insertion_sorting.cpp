#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void insertionsort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        for(int j=i-1;j>=0;j--)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j+1],arr[j]);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<"\n"<<arr[i];
    }
}


int main()
{
    int arr[5]={8,7,3000,2,1};
    insertionsort(arr,5);

}