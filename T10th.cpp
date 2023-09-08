#include<iostream>
using namespace std;

int main()
{
    int n,pro=1,sum=0;
    int a,b;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    while(n!=0)
    {
        a=n%10;
        n=n/10;
        pro=pro*a;
        sum=sum+a;
    }
    cout<<"Product:"<<pro <<endl;
    cout<<"Sum:"<<sum <<endl;
    cout<<"Product - sum: "<<pro-sum <<endl;
}