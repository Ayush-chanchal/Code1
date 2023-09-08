#include <iostream>
using namespace std;

void input(int arr[], int n)
{
    cout << "Enter elements of the array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

// int unique(int arr[], int n)
// {
//     int c = 0;
//     int d=0;
//     cout << "UNIQUE ELEMENTS:";
//     for (int i = 0; i < n; i++)
//     {
//         c = 0;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 c += 1;
//             }
//         }
//         for (int j = 0; j < i; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 c += 1;
//             }
//         }

//         if (c == 0)
//         {
//             cout <<"\n"<< arr[i] << " \n";
//             d++;
//         }
//     }
//        if(d==0)
//         {
//             cout << "nothing \n";
//         }
//     return 0;
// }

// int duplicate(int arr[], int n)
// {
//     int c = 0;
//     cout << "DUPLICATE ELEMENTS:";
//     for (int i = 0; i < n; i++)
//     {
//         c = 0;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 c += 1;
//             }
//         }
//         if (c != 0)
//         {
//             cout << arr[i] << " ";
//         }
//     }
//     cout << endl;
//     return 0;
// }

void unique(int arr[], int n)
{
    int c = 0;
    int ans = 0;
    int temp[10];
    cout << "ANSWER: ";
    for (int i = 0; i < n; i++)
    {
        c = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] == arr[i])
            {
                c += 1;
            }
        }
        temp[i] = c;
    }
    int d = 0;
    for (int i = 0; i < n; i++)
    {
        ans = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (temp[i] == temp[j])
            {
                ans += 1;
                break;
            }
        }
        if (ans >= 1)
        {
            break;
        }
    }
    if (ans >= 1)
    {
        cout << "False";
    }
    else
    {
        cout << "True";
    }
}

// int duplicate(int arr[], int n)
// {
//     int c = 0;
//     int temp[100];
//     cout << "\nDUPLICATE ELEMENTS:";
//     for (int i = 0; i < n; i++)
//     {
//         c = 0;
//         for (int j = i+1; j < n; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 c += 1;
//                 temp[j]=0;
//             }
//         }
//         if (c != 0)
//         {
//             cout << arr[i] << " ";
//         }
//     }
//     cout << endl;
//     return 0;
// }

int main()
{
    int arr[100];
    int size;
    cout << "Enter size of the array:";
    cin >> size;
    input(arr, size);
    unique(arr, size);
    // duplicate(arr, size);
}