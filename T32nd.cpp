#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {1, 0, 1, 0, 1};
    int n = 5;
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        while (arr[j] == 1 && i < j)
        {
            j--;
        }
        while (arr[i] == 0 && i < j)
        {
            i++;
        }
        if (arr[i] == 1 && arr[j] == 0 && i < j)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    for (int k = 0; k < n; k++)
    {
        cout << arr[i] << " ";
    }
}