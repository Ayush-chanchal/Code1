#include<iostream>
using namespace std;

void rev(string &str,int i,int j)
{
    if(i>j)
        return ;

    swap(str[i],str[j]);
    j--;
    i++;
    rev(str,i,j);
}

int main()
{
    string str="Ayush";
    rev(str,0,str.length()-1);
    cout<<endl<<str;
}