#include<iostream>

using namespace std;
int main()
{
    // int first=8;
    // int second=18;
    // int  *ptr=&second;
    // *ptr=9;
    // cout<<first<<" "<<second<<endl;

    // int first=6;
    // int *p=&first;
    // int *q=p;
    // (*q)++;
    // cout<<first<<endl;
    // return 0;

    int i=5;
    int& j=i;
    cout<<i<<endl;
    cout<<i++<<endl;
    cout<<j++<<endl;
    cout<<"Pre-increment operator:"<<endl;
    cout<<i<<endl;
    cout<<++i<<endl;
    cout<<++j<<endl;
}