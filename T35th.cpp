#include<iostream>
using namespace std;

int firstocc(int arr[],int n,int k)
{
    int start=0;
    int end=n-1;
    int ans;
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        if(arr[mid]==k){
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]<k)
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }  
    return ans; 
}
int lastocc(int arr[],int n,int k)
{
    int start=0;
    int end=n-1;
    int ans;
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        if(arr[mid]==k){
            ans=mid;
            start=mid+1;
        }
        else if(arr[mid]<k)
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }  
    return ans; 
}

int main(){
    int arr[5]={0,2,2,3,5};
    cout<<"First occurence index of 3 is "<< firstocc(arr,5,2);
    cout<<"\nlast occurence index of 3 is "<< lastocc(arr,5,2);
    return 0;
}
