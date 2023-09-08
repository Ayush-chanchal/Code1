#include<iostream>
using namespace std;

int main()
{
    int n,r=0,a;
    cout<<"Enter a number to grt the reverse of it:";
    cin>>n;
    while(n!=0)
    {
        a=n%10;
        n=n/10;
        r=r+a;
        r=r*10;
    }
    cout<<"Reverse of the number:"<<r/10<<endl;
}
// int reverse(int n) {
//         int r=0,a;
//         while(n!=0)
//         {
//                 a=n%10;
//                 n=n/10;
//                 r=r+a;
//                 r=r*10;
//         }
//     return r;
// }
// int main()
// {
//     int n,r;
//     cout<<"Enter a number to get the reverse of it:";
//     cin>>n;
//     r=reverse(n)/10;
//     cout<<"Reverse:"<<r;
//     return 0;
// }