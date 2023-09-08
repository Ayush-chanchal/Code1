#include<iostream>
using namespace std;

void digit(int n,int c=0)
{
    string s[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    if(n==0)
    {
       return ;
    //    cout<<"\t"<<s[0]<<"\t";
    }
    int a=n%10;
    digit(n/10);
    cout<<"\t"<<s[a];

}

int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    digit(n);
}