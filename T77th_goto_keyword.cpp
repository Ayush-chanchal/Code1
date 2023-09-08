#include<iostream>
using namespace std;

int main()
{
    // cout<<"Enter a number:";
    // int n;
    // cin>>n;
    // if(n%2==0)
    // goto printeven;
    // else
    // goto printodd;

    // printeven:
    // cout<<"it is even number";
    // return 0;
    // printodd:
    // cout<<"it is odd number";
    // return 0;




    // Looping Without using for loop/while loop and Do while loop

    int num;
    cout<<"Enter another number:"<<endl;
    cin>>num;
    print:
    cout<<num<<"\t";
    num++;
    if(num<10)
    goto print;
}