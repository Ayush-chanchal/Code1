#include<iostream>
using namespace std;

long long int sqrt(long int n)
{
   long long int s=0;
   long long int e=n;
   long long int mid=s+(e-s)/2;
    long long int ans=-1;
    while(s<=e)
    {
       long long int square=mid*mid;
        if(square==n)
        {
            return mid;
        }
        else if(square<n)
        {
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;

    }

    return ans;
}

double moreprecise(int n,int precise,int p)
{
    double a=p;
    double factor=1;
    for(double i=0;i<precise;i++)
    {
        factor=factor/10;
        for(double j=a;j*j<n;j+=factor)
        {
            a=j;
        }
    }
    return a;
}


int main()
{
    cout<<"Enter a number to calculate its square root:";
   long long int n;
    cin>>n;
   int p=sqrt(n);
   cout<<"Answer is "<<moreprecise(n,3,p);
}