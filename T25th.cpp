#include <iostream>
using namespace std;

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int altrev(int arr[], int n)
{
    int s = 0;
    int e = 1;
    while (s < n && e < n)
    {
        swap(arr[s], arr[e]);
        s += 2;
        e += 2;
    }
    cout << endl;
    return 0;
}

int main()
{
    int arr[10] = {-3, 2, 4, 5, 7, 1};
    int brr[10] = {-1, 10, 2, 4, 3};
    altrev(arr, 6);
    display(arr, 6);
    altrev(brr, 5);
    display(brr, 5);
}