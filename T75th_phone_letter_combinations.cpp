#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(string digit,string output,int index,const std::vector<string>& ans,string mapping[])
{
    if(index>=digit.length())
    {
        ans.push_back(output);
        return ;
    }
    int number=digit[index]-'0';
    string value=mapping[number];

    for(int i=0;i<value.length();i++)
    {
        output.push_back(value[i]);
        solve(digit,output,index+1,ans,mapping);
        output.pop_back();
    }
}

void main()
{
    const std::vector<string> digit;
    cout<<"Enter number:";
    std::cin>>digit;
    vector<string> ans;
    if(digit.length()==0){
        return ans;
    }
    string output;
    int index=0;
    string mapping[10]={"","","abc","def","ghi","jkl","mno","pqr","stuv","wxyz"};
    solve(digit,output,index,ans,mapping);
    return ans;
}