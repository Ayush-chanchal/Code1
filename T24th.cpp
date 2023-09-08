#include <iostream>
using namespace std;

void display(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int reverses(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
    cout << endl;
    return 0;
}

int main()
{
    int arr[10] = {-3, 2, 4, 5, 7, 1};
    int brr[10] = {-1, 10, 2, 4, 3};
    reverses(arr, 6);
    display(arr, 6);
    reverses(brr, 5);
    display(brr, 5);
}