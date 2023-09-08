#include <iostream>
using namespace std;

int validity(char ch)
{
    if ((ch >= 'a' && ch < 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
        return 1;
    }
    return 0;
}

char tolower(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
    {
        return ch;
    }
    else
    {
        char t = ch - 'A' + 'a';
        return t;
    }
}

bool palindrome(string str)
{
    int s = 0;
    int e = str.length() - 1;
    char ch;
    while (s <= e)
    {
        if (str[s] != str[e])
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}

int main()
{
    string str = "noon";
    string temp = " ";
    for (int i = 0; i < str.length(); i++)
    {
        if (validity(str[i]))
        {
            temp.push_back(str[i]);
        }
    }
    for (int i = 0; i < temp.length(); i++)
    {
        temp[i] = tolower(temp[i]);
    }
    // char ch = palindrome(temp);
    cout << "Is palindrom:" << palindrome(temp);
}