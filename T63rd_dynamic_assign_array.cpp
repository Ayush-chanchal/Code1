#include<iostream>
using namespace std;

int sum(int *arr,int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];//or it can be written as *(arr+i);

    }
    return sum;
}

int main()
{
    int n;//static memory allocation(store inside stack)
    cout<<"How many integers do you want to store?:"<<endl;
    cin>>n;
    int *arr=new int[n];//dynamic memory allocation(store inside heap)
    cout<<"\n Enter the values in the array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>*(arr+i);
    }
    int sum1=sum(arr,n);
    cout<<"Sum is "<<sum1;

    delete []arr;//(it is used to release the heap memory allocation(Heap memory allocation is done for the dynamically
                 //  memory allocation and stack memory allocation done forn the static memory allocation )
}