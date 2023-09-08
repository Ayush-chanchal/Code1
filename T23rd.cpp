#include<iostream>
using namespace std;

// int main()
// {
//     int a[100];
//     for(int i=0;i<100;i++)
//     {
//         a[i]=-24;
//     }
//     for(int i=0;i<100;i++)
//     {
//         cout<<a[i]<<endl;  
//     }
// }

int func(int a[],int size)
{   
    int sum=0;
    cout<<"Enter values in array:";
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    return sum;
}
int main()
{
//     int n=INT_MAX;
//     cout<<n;
//     int a=INT_MIN;
//     cout<<endl<<a;

    int a[100];
    int size;
    cout<<"Enter size of the array:";
    cin>>size;
    int sum=func(a,size);
    cout<<"Sum of the elements of the array:"<<sum;

}