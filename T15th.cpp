#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, b, i = 0;
    int c, ans = 0;
    cout << "Enter a number to get one's complement:";
    cin >> n;
    if (n > 0)
    {
        cout << "One's complement:";
        while (n != 0)
        {
            b = n & 1;
            c = !b;
            ans = ans + (c * pow(2, i));
            n = n >> 1;
            i += 1;
        }
        cout << ans;
    }
    else if(n==0)
    {
        return 0;
    }
    else
        cout << "Number is less than 0";
}