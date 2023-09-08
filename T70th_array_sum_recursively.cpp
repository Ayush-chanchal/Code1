#include<iostream>
using namespace std;

int sum(int arr[],int n, int s=0)
{
   
    if(n==0)
    {
        return s;
    }
    
        s+=arr[0];
        return sum(arr+1,n-1,s);

    
}

int main()
{
    int arr[]={11,2,3,4,5};
    int s=sum(arr,5);
    cout<<"Sum of the elements of the array calculated using recursion:"<<s;
}