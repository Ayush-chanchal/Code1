#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

bool ispossible(int arr[],int n,int k,int mid ) 
{
    int cowcount=1;
    int lastpos=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]-lastpos>=mid)
        {
            cowcount++;
            if(cowcount==k)
            {
                return true;
            }
            lastpos=arr[i];
        }
    }
    return false;
}

int aggressivecows(int arr[],int n,int k)
{
    // sort(arr.begin(),arr.end());
    int s=0;
    int maxi=-1;
    for(int i=0;i<n;i++)
    {
        maxi=max(maxi,arr[i]);
    }
    int e=maxi;
    int ans=-1;
    int mid=s+(e-s)/2;

    while(s<=e)
    {
        if(ispossible(arr,n,k,mid))
        {
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main()
{
    int arr[4]={1,2,4,5};
    int k=2;
    cout<<"Largest minimum distance between the cows:"<<aggressivecows(arr,4,k);
}