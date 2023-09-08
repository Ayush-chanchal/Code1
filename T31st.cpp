#include<iostream>
using namespace std;

int main()
{
    int arr[10]={1,2,3,4,5,6};
    int n=6;
    int c=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                c=arr[i]+arr[j]+arr[k];
                if(c==12)
                {
                    cout<<arr[i]<<" + "<<arr[j]<<" + "<<arr[k]<<" = "<<c;
                }

            }
        }
        cout<<endl;
    }
}