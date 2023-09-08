#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {2, 1, 4, 6, 3};
    int n = 5; 
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            c = arr[i] + arr[j];
            if (c == n)
            {
                if (arr[i] < arr[j])
                {
                    cout << arr[i] << " + " << arr[j] << " = " << c;
                }
                else
                {
                    cout << arr[j] << " + " << arr[i] << " = " << c;
                }
            }
        }
        cout << endl;
    }
}