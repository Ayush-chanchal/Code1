#include<iostream>

using namespace std;
int main()
{
    int i=1;
    int n;
    int sum=0;
    // cout<<"Enter a number:";
    // cin>>n;
    // while (i<n)
    // {
    //     cout<<i<<endl;
    //     i+=1;
    // }
    // while(i<=n)
    // {
    //     sum=sum+i;
    //     i+=1;

    // }
    // cout<<"\nSum : "<<sum;
    // while (i<=n)
    // {
    //     if(i%2==0)
    //     {
    //         sum=sum+i;
    //     }
    //     i+=1;
    // }
    // cout<<"Sum of Even numbers:"<<sum;
    
    // i=2;
    // while (i<n)
    // {
    //     if(n%i==0)
    //     {
    //         sum=1;
    //     }
        
    //     i+=1;
    // }
    // if(sum==1){
    //     cout<<"Not Prime"<<endl;
    // }
    // else{
    //     cout<<"prime";
    // }
    
    float f=32;
    float c;
    cout<<"Farenheit and celsius table:"<<endl;
    while (i<10)
    {
        c=(f-32)*5/9;
        cout<<"farenheit= "<<f<<"\tcelsius= "<<c<<endl;
        f+=1;
        i+=1;

    }
    
}