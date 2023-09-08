#include <iostream>
using namespace std;

void duplicatetwice(int arr[], int n)
{
    int slow = arr[0];
    int fast = arr[0];
    do
    {
        slow = arr[0];
        fast = arr[arr[fast]];

    } while (slow != fast);

    fast = arr[0];
    while (slow != fast)
    {
        slow = arr[slow];
        fast = arr[fast];
    }
    
    cout << slow;
}

int main()
{
    int arr[10] = {1, 2, 1, 2, 3, 4, 1, 3};
    int n = 8;
    duplicatetwice(arr, n);
}