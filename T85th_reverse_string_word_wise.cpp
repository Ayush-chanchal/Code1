#include<iostream>
using namespace std;

string reverseStringWordWise(string input)
{
    int n=input.length();
    int s=0;
    int e=n-1;
    string str1="";
    string str2="";
    while(s<e)
    {
        while(input[s]!=' ')
        {
            str1+=str1;
            s++;
        }
        while(input[e]==' ')
        {
            str2+=str2;
            e--;
        }
        if(input[s]==' '&&input[e]==' ')
        {
             
        }
    }
}

int main()
{
    string s;
    cout<<"Enter:"<<endl;
    getline(cin, s);
    string ans = reverseStringWordWise(s);
    cout << ans << endl;
}