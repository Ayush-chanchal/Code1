#include<iostream>
using namespace std;

int main()
{
    int arr[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    cout<<"Before Spiral printing:"<<endl;
    for(int row=0;row<4;row++)
    {
        for(int col=0;col<4;col++)
        {
            cout<<arr[row][col]<<"\t";
        }
        cout<<endl;
    }
}