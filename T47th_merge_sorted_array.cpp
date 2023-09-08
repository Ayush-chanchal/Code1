#include <iostream>
using namespace std;

void merge(int arr1[], int arr2[], int arr3[], int m, int n)
{
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }

    while (i < n)
    {
        arr3[k++] = arr1[i++];
    }

    while (j < m)
    {
        arr3[k++] = arr2[j++];
    }

    cout << "output:";
    for (int a = 0; a < n + m; a++)
    {
        cout << arr3[a] << " ";
    }
}

int main()
{
    int arr1[6] = {1, 4, 5, 6, 8,9};
    int arr2[6] = {2, 3, 6, 7, 10};
    int arr3[11] = {0};
    merge(arr1, arr2, arr3, 5, 6);
}