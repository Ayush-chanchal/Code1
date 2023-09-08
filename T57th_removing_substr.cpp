#include <iostream>
#include <string>
using namespace std;

// --- removing substring from the main string

// int main()
// {
//     string str="daabcbaabcbc";
//     string t="abc";
//    while(str.length()!=0&&str.find(t)<str.length())
//     {
//        str.erase(str.find(t),t.length());
//     }
//     for(int i=0;i<str.length();i++)
//     {
//         cout<<str[i]<<" ";
//     }
// }

// ----removing the equal adjacent digit from the main string

int main()
{
    string s = ("abbaca");
    int n=s.length();
    char b[n];
    int i=0;

    
    for(int j=0;j<n;j++)
    {
        char current=s.at(j);
        if(i>0&&b[i-1]==current)
        {   
            i--;
        }
        else{
            b[j]=current;
            i++;
        }
    }
    for(int j=0;b[j]!='\0';j++)
    {
        cout<<b[j];
    }
}