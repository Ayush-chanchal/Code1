#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int ans = 0;
    int i = 0;
    cout << "Enter a number to compliment of base of 10:" << endl;
    cin >> n;
    while (n != 0)
    {
        int bit = n & 1;
        ans = ans + (bit * pow(10, i));
        n = n >> 1;
        i += 1;
    }
    cout << "Answer:" << ans;
}
