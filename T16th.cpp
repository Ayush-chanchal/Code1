#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, b, ans = 0;
    int i = 0;
    cout << "Enter a negative number to check its binary form:";
    cin >> n;

    while (n != 0)
    {
        b = n & 1;
        ans = ans + (b * pow(10, i));
        n = n >> 1;
        i += 1;
    }
    if (n < 0)
    {

        n = n * (-1);

        int newAns = (~ans);

        newAns = newAns + 1;
        cout << newAns << endl;
    }
    else
    {

        cout << ans << endl;
    }
}