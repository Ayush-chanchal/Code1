#include<iostream>
using namespace std;

// This can be done with the help of Dynamic programming but with the use of recursion code studio is showing 
// time limitation error(TLE).

int count(int n)
{
    if(n<0)
    {
        return 0;
    }
    if(n==0)
    return 1;

    int c=count(n-1)+count(n-2);
    return c;
}

int main()
{
    int n;
    cout<<"Enter number of stairs:"<<endl;
    cin>>n;
    int ans=count(n);
    cout<<"Distinct way:"<<ans;
}