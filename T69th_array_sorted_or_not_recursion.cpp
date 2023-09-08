#include<iostream>
using namespace std;

bool bsearch(int arr[],int n)
{
    if(n==0||n==1)
    {
        return true;
    }
    if(arr[0]>arr[1])
    {
        return false;
    }
    else{
        bool rpart=bsearch(arr+1,n-1);
        return rpart;
    }
}

int main()
{
    int arr[]={5,2,3,4,5};
    bool b=bsearch(arr,5);
    if(b)
    {
        cout<<"Array is sorted"<<endl;
    }
    else{
        cout<<"Array is not sorted"<<endl;
    }
}