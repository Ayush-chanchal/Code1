#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number to check is it prime or not:"<<endl;
    cin>>n;
    bool isprime=1;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            isprime=0;
            break;
        }
    }
    if(isprime==0)
    {
        cout<<"Not a prime!"<<endl;
    }
    else{
        cout<<"Is a prime!"<<endl;
    }

}