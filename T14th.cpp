#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Decimal to binary

int main()
{
    int n, b, c = 0;
    int i = 0;
    cout << "Enter a number:";
    cin >> n;
    cout << "binary:";
    while (n != 0)
    {
        b = n & 1;
        c = (b * pow(10, i)) + c;
        n = n >> 1;
        i += 1;
    }
    cout << c;
}

// Binary to decimal

// int main()
// {
//     int n,b,i=0;
//     int ans=0;
//     cout<<"Enter a number in binary:";
//     cin>>n;
//     while(n!=0)
//     {
//        b=n%10;
//        ans+=b*pow(2,i);
//        n=n/10;
//        i+=1;

//     }
//     cout<<ans;
// }