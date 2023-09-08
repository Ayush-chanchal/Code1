#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

string reverseEachWord(string input)
{
    int n = input.length();
    int b = 0;
    int a;
    for ( a = 0; a < n; a++)
    {
        if (input[a] == ' ')
        {
            reverse(input.begin() + b, input.begin() + a);
            b = a + 1;
        }
    }
   

        reverse(input.begin() + b, input.end() );
        // input.erase(remove(input.begin(),input.end(),c),input.end());
    

    return input;
}

int main()
{

    cout << "Enter values in the string:" << endl;
    string str;
    getline(cin, str);
    string ans = reverseEachWord(str);
    cout << ans << endl;
}