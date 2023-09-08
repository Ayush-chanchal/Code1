#include <bits/stdc++.h> 
#include <iostream>
#include <cstring>
using namespace std;

string removeConsecutiveDuplicates(string input)
{
    // Write your code here
    string s="";
    for(int i=0;i<input.length();i++)
    {
        if(input[i-1]==input[i])
        {
            continue;
        }
        else{
            s+=input[i];
        }
    }
    return s;
}

int main()
{
    cout<<"Enter a String value:"<<endl;
    string str;
    cin >> str;
    string ans = removeConsecutiveDuplicates(str);
    cout << ans << endl;
}