#include<iostream>
using namespace std;

int main()
{
    int arr[3][3]={1,2,3,4,5,6,7,8,9};

    cout<<"Before:"<<endl;
    for(int row=0;row<3;row++)
    {
        for(int col=0;col<3;col++)
        {
            cout<<arr[row][col]<<"\t";
        }
        cout<<endl;
    }
    cout<<"\nWave like printing:"<<endl;
    int col=0;
    for(int col=0;col<3;col++)
    {
        if(col&1)
        {
            for(int row=3-1;row>=0;row--)
            {
                cout<<arr[row][col]<<"\t";
            }
        }
        else{
            for(int row=0;row<3;row++)
            {
                cout<<arr[row][col]<<"\t";
            }
        }
        cout<<endl;


        
    }
}