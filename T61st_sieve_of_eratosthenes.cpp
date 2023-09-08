#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number:" << endl;
    cin >> n;
    int c = 0;
    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i < n; i++)
    {
        if (prime[i])
        {
            c++;
            for (int j = 2 * i; j < n; j = j + i)
            {
                prime[j] = 0;
            }
        }
    }
    cout << "Total Number of Prime Numbers Before the Input Number:" << c;
    
}