#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(5);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    int count = 0;
    int n = v.size();
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i - 1] > v[i])
        {
            count++;
        }
    }
    if (v[n - 1] > v[0])
        count++;
    

    if (count <= 1)
    {
        cout << "Yes, it is sorted and rotated.";
    }
    else
    {
        cout << "No, it is not sorted and rotated.";
    }
}