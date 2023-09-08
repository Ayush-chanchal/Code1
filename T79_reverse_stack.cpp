#include<iostream>
#include<stack>

using namespace std; 

int main()
{
    string str="Ayush";
    stack<char> s;
    string ans="";
    char a;
    for(int i=0;i<str.length();i++)
    {
        s.push(str[i]);
    }
    cout<<"Reversing of the stack:"<<endl;
    for(int i=0;i<str.length();i++)
    {
        a=s.top();
        ans.push_back(a);
        s.pop();
    }
    cout<<"After reversing the array:"<<ans;
}