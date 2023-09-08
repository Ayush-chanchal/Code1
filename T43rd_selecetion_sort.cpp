#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {23, 10, 3, 2, 1};
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[j] < arr[i])
            {
                swap(arr[j], arr[i]);
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