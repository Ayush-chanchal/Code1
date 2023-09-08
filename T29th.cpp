#include <iostream>
using namespace std;

int main()
{
    int arr[20] = {1, 2, 32, 4, 11};
    int brr[20] = {1, 4, 45, 6, 7, 4};
    int c = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (arr[i] == brr[j])
            {
 
                cout << brr[j] << " ";
                break;
            }
        }
    }
}