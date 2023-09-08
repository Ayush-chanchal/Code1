#include <iostream>
using namespace std;

bool bsearch(int arr[], int s, int e, int k)
{
    int mid = s + (e - s) / 2;
    if (s > e)
    {
        return false;
    }
    if (arr[mid] == k)
    {
        return true;
    }

    if (arr[mid] < k)
    {
        return bsearch(arr, mid + 1, e, k);
    }
    else
    {
        return bsearch(arr, s, mid - 1, k);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int k;
    cout << "Enter a number to check?:" << endl;
    cin >> k;
    bool b = bsearch(arr, 0, 4, k);
    if (b)
    {
        cout << "Yes it is in the array!" << endl;
    }
    else
    {
        cout << "No it is not in the array!" << endl;
    }
}