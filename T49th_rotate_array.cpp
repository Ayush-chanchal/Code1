#include <iostream>
#include <vector>
using namespace std;

int main()
{
   vector<int> arr(5);
   int k = 2;
   vector<int> temp(5);
   arr.push_back(1);
   arr.push_back(2);
   arr.push_back(3);
   arr.push_back(4);
   arr.push_back(5);
   for (int i = 0; i < 5; i++)
   {
      temp[(i + k) % 5] = arr[i];
   }
   arr = temp;
   for (int i = 0; i < 5; i++)
   {
      cout << arr.at(i);
   }
}