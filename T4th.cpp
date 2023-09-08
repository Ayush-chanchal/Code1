#include<iostream>
using namespace std;

int main()
{
    int a=9;
    int b=1;
    float b1;
    bool c1;
    double c2;
    char c3;
    bool f=(a==b);
    bool s=(a>b);
    bool t=(a<b);
    cout<<f<<endl;
    cout<<s<<endl;
    cout<<t<<endl;
    cout<<bool(a>=b)<<endl;
    cout<<bool(a<=b)<<endl;
    cout<<bool(a!=b)<<endl;
    int c=(a>b)?a:b;
    cout<<c<<endl;
    cout<<"Size of integer a:"<<sizeof(a)<<endl;
    cout<<"Size of integer b:"<<sizeof(b)<<endl;
    cout<<"Size of boolean c1:"<<sizeof(c1)<<endl;
    cout<<"Size of float b1:"<<sizeof(b1)<<endl;
    cout<<"Size of double c2:"<<sizeof(c2)<<endl;
    cout<<"Size of character c3:"<<sizeof(c3)<<endl;

 
}