#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void duplicate(int arr[], int n)
{
    int a = 0;
    for (int i = 0; i < n; i++)
    {
        a = a ^ arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        a = a ^ i;
    }
    cout << a;
}

int main()
{
    int arr[10] = {1, 2, 1, 3, 4, 2, 1};
    int n = 7;
    duplicate(arr, n);
}