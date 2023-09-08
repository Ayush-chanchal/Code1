// #include <bits/stdc++.h>
#include <iostream>
#include <cstring>
using namespace std;

void printSubstrings(string input)
{
    // Write your code here
    for (int i = 0; i < input.length(); i++)
    {
        for (int j = 1; j <=input.length()-i; j++)
        {
            cout << input.substr(i,j)<<endl ;
        }
           
    }
}

int main()
{
    string input;
    getline(cin, input);
    printSubstrings(input);
    return 0;
}