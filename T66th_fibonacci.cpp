#include <iostream>
using namespace std;

//  With recursion

int fibo(int n)
{

    if (n == 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }
    int ans = (fibo(n - 1) + fibo(n - 2));

    return ans;
}

//  Without Recursion

// void fib(int n)
// {
//     int n1 = 0;
//     int n2 = 1;
//     int n3;

//     for (int i = 3; i <= n; i++)
//     {
//         n3 = n1 + n2;
//         n1 = n2;
//         n2 = n3;
//         cout << n3 << endl;
//     }
// }

int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;
    int ans = fibo(n);
    cout << "\nAnswer of fibonacci series using recursion:" << ans;
    //     cout << "\nAnswer is:" << endl;
    //     cout<<0<<"\n"<<1<<endl;
    //     fib(n);
}