#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>

using namespace std;

void kthSmallestLargest(int arr[], int n, int k)
{
    // Write your code here
    int max[k];
    int min[k];

    sort(arr, arr + n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }

    int a = 0;
    min[0] = arr[0];
    max[0] = arr[n - 1];
    min[k - 1] = -1;
    max[k - 1] = -1;

    if (k > 0 && k <= n)
    {
        for (int i = 0; i < n; i++)
        {
            if (max[k - 1] == -1)
            {
                if (arr[n - i - 1] < max[a])
                {
                    max[++a] = arr[n - i - 1];
                }
            }
            else
            {
                break;
            }
        }
        a = 0;
        for (int i = 0; i < n; i++)
        {
            if (min[k - 1] == -1)
            {
                if (arr[i] > min[a])
                {
                    min[++a] = arr[i];
                }
            }
            else
            {
                break;
            }
        }
    }
    cout << "\nLargest:" << max[k - 1] << endl;
    cout << "Smallest:" << min[k - 1];
}

int main()
{
    int t;
    cout << "Enter t value:";
    cin >> t;

    while (t > 0)
    {
        int n, k;
        cout << "Enter N and k:" << endl;
        cin >> n >> k;
        int arr[n];
        cout << "Enter Value in the array:" << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        kthSmallestLargest(arr, n, k);
        t--;
    }
    return 0;
}