#include<iostream>
using namespace std;

int main()
{
    int arr[5]={0,1,0,2,3};
    int i=0,j=0;
    for(j=0;j<5;j++)
    {
        if(arr[j]!=0)
        {
            swap(arr[j],arr[i]);
            i++;
        }
    }
    cout<<"Output:";
    for(int a=0;a<5;a++)
    {
        cout<<arr[a]<<" ";
    }
}