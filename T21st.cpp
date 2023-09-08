#include <iostream>
using namespace std;

int func()
{
    int n, r, d;
    float c;
    cout << "n:";
    cin >> n;
    cout << "r:";
    cin >> r;
    int pro = 1;
    int ppro = 1;
    int pppro = 1;
    for (int i = 1; i <= n; i++)
    {
        pro = pro * i;
    }
    for (int i = 1; i <= r; i++)
    {
        ppro = ppro * i;
    }
    d = n - r;
    for (int i = 1; i <= d; i++)
    {
        pppro = pppro * i;
    }
    c = pro / (ppro * (pppro));
    return c;
}

int main()
{
    cout << "ncr:\n";
    float a = func();
    cout << "Value is " << a;
    return 0;
}