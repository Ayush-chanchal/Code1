#include<iostream>
using namespace std;

// 2D Array creation using dynamic memory allocation
int main()
{
    int n;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    int **arr=new int *[n];
    for (int i = 0; i < n; i++)
    {
       arr[i]=new int[n];// we can also change the value of n to meake a 2d array of size 3x4. 
    }

    // Input
    cout<<"Enter some values in the 2d array:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"\nOutput"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    // we have to free the heap memory at the end because we assigned it dynamically
    for(int i=0;i<n;i++)
    {
        delete [ ] arr[i];
    }
    delete [] arr;
    

    return 0;
}