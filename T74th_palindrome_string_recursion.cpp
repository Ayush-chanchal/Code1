#include<iostream>
using namespace std;

bool palindrome(string str, int i)
{
    int l=str.length()-i-1;
    if(i>l)
    return true;

    if(str[i]!=str[l])
    {
        return false;
    }
    else{
        palindrome(str,i+1);
    }
}

int main()
{
    string str="bab";
    bool pal=palindrome(str,0);
    if(pal)
    {
        cout<<"It is palindrome"<<endl;
    }
    else{
        cout<<"It is not a palindrome"<<endl;
    }
}