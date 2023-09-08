#include<iostream>
#include<string.h>
using namespace std;

void print(string str)
{
    for(int i=0;i<str.length();i++)
    {
        cout<<str[i];
    }

}

void store(string str)
{
    int i=str.length()-1;
   
    string ans="";
    while(i>=0)
    {
        while(i>=0&&str[i]==' ')
        {
            i--;
        }
        int j=i;
        while(i>=0&& str[i]!=' ')
        {
            i--;
        }
        
        if(ans.empty())
        {
            ans=str.substr(i+1,j);
        }
        
        else{
            ans=ans+" "+str.substr(i+1,j);
        }
    }
    print(ans);
}

int main()
{
    string str="the sky is blue";
    cout<<"Before:"<<endl;
    print(str);
    cout<<"\nAfter:"<<endl;
    store(str);
    
}