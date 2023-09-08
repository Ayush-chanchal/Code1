#include <iostream>
using namespace std;

/*
1

int func(int n)
{
    int c;
    c=3*n+7;
    return c;
}
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"3 * n + 7 :"<<func(n);
}
*/

/*
2
int func(int a,int b)
{
    int c=0;
    while(a!=0)
    {
        if((a&1)==1)
        {
            c++;
        }
        a=a>>1;
    }
    while(b!=0)
    {
        if((b&1)==1)
        {
            c++;
        }
        b=b>>1;
    }
    return c;
}

int main()
{
    int a,b;
    cout<<"Enter a and b:";
    cin>>a>>b;
    int c=func(a,b);
    cout<<"Total Set bits:"<<c;
}
*/

int func(int n)
{
    int a = 0;
    int b = 1;
    for (int i = 0; i < n; i++)
    {
        int c = a;
        cout << a << " ";
        a = b;
        b = b + c;
    }
    return 0;
}

int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;
    func(n);
}