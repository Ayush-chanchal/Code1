#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     int a, b;
//     cout << "Enter values for two numbers:" << endl;
//     cout << "a:";
//     cin >> a;
//     cout << "b:";
//     cin >> b;
//     cout << "For Addition press 1" << endl;
//     cout << "For Subtraction press 2" << endl;
//     cout << "For Division press 3" << endl;
//     cout << "For Multiplication press 4" << endl;
//     int choice;
//     cin >> choice;
//     switch (choice)
//     {
//     case 1:
//         cout << "Addition(a+b):" << a + b;
//         break;
//     case 2:
//         cout << "Subtraction(a-b):" << a - b;
//         break;
//     case 3:
//         if (b == 0)
//         {
//             cout << "Divior b is " << b;
//             break;
//         }
//         cout << "Division(a/b):" << a / b;
//         break;
//     case 4:
//         cout << "Multiplication(a*b):" << a * b;
//         break;
//     }
// }

int main()
{
    int a, b;
    char ch;
    cout << "Enter the values:" << endl;
    cout << "a:";
    cin >> a;
    cout << "b:";
    cin >> b;
    cout << "Enter your choice(+,-,/,*,%): ";
    cin >> ch;
    switch (ch)
    {
    case '+':
        cout << "Addition of two numbers(a+b):" << a + b;
        break;
    case '-':
        cout << "Subtraction of two numbers(a-b):" << a - b;
        break;
    case '/':
        if (b == 0)
        {
            cout << "Divisor is zero";
            break;
        }
        else
        {
            cout << "Division of two numbers(a/b):" << a / b;
            break;
        }
    case '*':
        cout << "Multiplication of two numbers(a*b):" << a * b;
        break;
    case '%':
        cout << "Remainder of two values(a % b):" << a % b;
        break;
    }
}