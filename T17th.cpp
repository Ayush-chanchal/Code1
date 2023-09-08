#include <iostream>
#include<bits/stdc++.h>
using namespace std;

// 1

int main()
{
    int n, a, c = 0;
    cout << "Enter a number(To chech it is power 2 or not!):";
    cin >> n;
    while (n != 1)
    {
        a = n % 2;
        if (a != 0)
        {
            c += 1;
            break;
        }
        else{
            c=0;
        }
        n=n/2;
    }
    if (c != 1)
    {
        cout << "TRUE" << endl;
    }
    else
    {
        cout << "False";
    }
}

// 2

// int main()
// {
//     int n;
//     cout<<"Enter a number(To check it is power 2 or not!):";
//     cin>>n;
//     if((n&(n-1))==0)
//     {
//         cout<<"\nTRUE";

//     }
//     else{
//         cout<<"\nFalse";
//     }
// }

// 3

int main()
{
    int n,c=0;
    cout<<"Enter a number(To check it is power 2 or not!):";
    cin>>n;

    for(int i=0;i<=30;i++)
    {
        int a=pow(2,i);
        if(n==a)
        {
            c=0;
            cout<<"True";
            break;
        }
        else{
            c++;
        }
    }
    if(c!=0)
    {
        cout<<"False";
    }
}