#include<iostream>
#include<vector>
using namespace std;


vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.
    int n=arr.size();
    int a;

    for(int i=0;i<k;i++)
    {
        a=arr.at(0);
        for(int j=0;j<n-1;j++)
        {
            arr.at(j)=arr.at(j+1);
        }
        arr.at(n-1)=a;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return arr;
}
int main()
{
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    rotateArray(arr,2);
}