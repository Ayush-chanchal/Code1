#include<iostream>
using namespace std;

int main()
{
    char a[]="ab\0cde\0";
    string a1="ab\0cde\0";
    cout<<"Comparing character array with string:\n";
    cout<<"Character array:"<<endl;
    for(int i=0;a[i]!='\0';i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\nString:"<<endl;
    for(int i=0;i<a1.length();i++)
    {
        cout<<a1[i]<<" ";
    }
}
