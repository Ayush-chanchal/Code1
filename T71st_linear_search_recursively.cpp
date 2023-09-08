#include<iostream>
using namespace std;

bool lsearch(int arr[],int n,int k)
{
    if(n==0)
    {
        return false;
    }
    if(arr[0]==k)
    {
        return true;
    }
    else{
        int a=lsearch(arr+1,n-1,k);
        return a;
    }

}

int main()
{
    int arr[]={1,2,3,4,5};
    int k;
    cout<<"Enter a number to check is it an element in the array or not?:"<<endl;
    cin>>k;
    bool check=lsearch(arr,5,k);
    if(check)
    {
        cout<<"Yes it is in the array"<<endl;
    }
    else{
        cout<<"No it is not in the array"<<endl;
    }
}