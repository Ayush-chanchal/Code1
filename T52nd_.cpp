#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int classTest( int a[],  int n, int k) 
{
    // Write your code here.
    int i;
    for(i=1;i<n;i++)
    {
        for(int j=i-1;j>=0;j--)
        {
            if(a[j+1]>a[j])
            {
                swap(a[j+1],a[j]);
            }
        }
    }
    return a[k-1];
}

int main()
{
   int  a[2]={ 9,17};
    int c=classTest(a,2,1);
    cout<<"Marks:"<<c;

}