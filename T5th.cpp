#include<iostream>
using namespace std;

int main()
{   
    // int n,a;
    // cout<<"Enter a number:";
    // cin>>n;
    // if(n>0)
    // {
    //     cout<<"Number is positive!";
    // }
    // else{
    //     cout<<"Number is negative!";
    // }
    // a=cin.get();
    // cout<<"\nvalue: "<<a;

    // int a,b;
    // cin>>a;
    // cin>>b;
    // if(a>b){
    //     cout<<" a is greater than b";
    // }
    // else{
    //     if(b>a)
    //     {
    //         cout<<"b is greater than a";
    //     }
    //     else{
    //         cout<<"a is equal to b";
    //     }
    // }

    // int age;
    // cout<<"Enter your age to check your age group:";
    // cin>>age;
    // if(age>=18&&age<50 )
    // cout<<"\nYou are young"<<endl;
    // else if(age<18&&age>=10)
    // cout<<"You are in puberty age"<<endl;
    // else if(age>=50)
    // cout<<"You are old"<<endl;
    // else if (age <10)
    // cout<<"You are child";
    // int a=9;
    // if(a==9)
    // {
    //     cout<<"Niney"<<endl;

    // }
    // if(a>0)
    // {
    //     cout<<"positive";
    // }
    // else{
    //     cout<<"Negative";
    // }

    // int a=2;
    // int b=a+1;
    // if((a=3)==b)
    // {
    //     cout<<a;
    // }
    // else{
    //     cout<<a+1;
    // }

    char ch;
    cout<<"Enter a character to check it:"<<endl;
    cin>>ch;
    if(ch>='a'&&ch<='z')
    {
        cout<<"It is in lower case"<<endl;
    }
    else if(ch>='A'&&ch<='Z')
    {
        cout<<"It is in upper case"<<endl;
    }
    else if(ch>=0&&ch<=9)
    {
        cout<<"It is numeric"<<endl;
    }
    else{
        cout<<"It is special character";
    }
}