#include<iostream>
using namespace std;

bool ispossible(long long int arr[],int n,int m,int mid)
{
    int paintercount=1;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(sum+arr[i]<=mid)
        {
            sum+=arr[i];
        }
        else{
            paintercount++;
            if(paintercount>m||arr[i]>mid)
            {
                return false;

            }
            sum=arr[i];
        }

        
    }
    return true;
}

long long int partition(long long int arr[],int n,int m )
{
    int s=0;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    int e=sum;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        if(ispossible(arr,n,m,mid))
        {
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;

        }
        mid=s+(e-s)/2;
    }
    return ans;
}


int main()
{
    long long arr[5]={1,2,3,4,5};
    int m=2;
    cout<<"maximum walls allocated to the painters:"<<partition(arr,5,m);
}