#include<iostream>
using namespace std;

int main()
{
    int a=3;
    int b=4;
    cout<<"a & b:"<<(a&b)<<endl;
    cout<<"a | b:"<<(a|b)<<endl;
    cout<<"a ^ b:"<<(a^b)<<endl;
    cout<<" ~b:"<<(~b)<<endl;
    cout<<"Left shift:"<<(a<<1)<<endl;
    cout<<"Right shift:"<<(a>>2)<<endl;

    int i=7;
    cout<<++i<<endl;
    cout<<i++<<endl;
    cout<<i--<<endl;
    cout<<--i<<endl;
    a=10,b=1;
    if(++a)
    {
        cout<<b;
    }
    else{
        cout<<++b;
    }
    cout<<a;
}