#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {23, 10, 3, 2, 1};
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    cout << "Array:";
    for (int i = 0; i < 5; i++)
    {
        cout << "\n"
             << arr[i];
    }
}