#include<iostream>
using namespace std;

// int pivot(int arr[],int n)
// {
//     int s=-1;
//     int lsum=0;
//     int rsum=0;
//     for(int i=0;i<n;i++)
//     {
//         lsum=0;
//         rsum=0;
//         for(int j=0;j<i;j++)
//         {
//             lsum=lsum+arr[j];
//         }
//         for(int k=n-1;k>i;k++)
//         {
//             rsum=rsum+arr[k];
//         }
//         if(lsum==rsum){
//            s=i;
//         }
    
//     }
//     return s;
// }

// int main()
// {
//     int arr[6]={1,7,3,6,5,6};
//     cout<<"pivot index is:"<<pivot(arr,6);
//     return 0;
// }



int pivot(int arr[],int n)
{
    int s=0;
    int e=0;
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

int main()
{
    int arr[5]={12,1,23,45,4};
    cout<<"Pivot index is "<<pivot(arr,5);
}