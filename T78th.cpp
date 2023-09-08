#include <bits/stdc++.h> 
using namespace std;


int main()
{
    stack<int> s;
    s.push(1);
    s.push(22);
    s.push(19);
    s.pop();

    cout<<"Top Element is "<<s.top()<<endl;
    cout<<"Checking Is it Empty or not "<<s.empty()<<endl;
    cout<<"Size of the stack is "<<s.size();
}