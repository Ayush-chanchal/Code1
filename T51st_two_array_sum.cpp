#include <iostream>
#include <vector>
using namespace std;

void rev(vector<int> &arr3)
{
    int s = 0;
    int e = arr3.size() - 1;
    while (s < e)
    {
        swap(arr3[s++], arr3[e--]);
    }
    for (int a : arr3)
    {
        cout << a << " ";
    }
}

int main()
{
    vector<int> arr1(3);
    vector<int> arr2(2);
    vector<int> arr3;
    arr1.push_back(2);
    arr1.push_back(2);
    arr1.push_back(3);
    arr2.push_back(10);
    arr2.push_back(11);

    int i = arr1.size() - 1;
    int j = arr2.size() - 1;
    int carry = 0;

    while (i >= 0 && j >= 0)
    {
        int val1 = arr1[i];
        int val2 = arr2[j];

        int sum = val1 + val2 + carry;
        carry = sum / 10;
        sum = sum % 10;
        arr3.push_back(sum);
        i--;
        j--;
    }

    while (i >= 0)
    {
        int sum = arr1[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        arr3.push_back(sum);
        i--;
    }
    while (j >= 0)
    {
        int sum = arr2[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        arr3.push_back(sum);
        j--;
    }

    while (carry != 0)
    {
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        arr3.push_back(sum);
    }
    rev(arr3);
}