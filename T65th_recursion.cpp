#include<iostream>
using namespace std;

int rec(int src,int dest)
{
    cout<<"Source:"<<src<<"\tDestination:"<<dest<< endl;
    if(src==dest)//base condition (it is very important when you are applying recursion on the problem!)
    {
        cout<<"Reached"<<endl;
        return 0;
    }
    src++;
    rec(src,dest);
    return 0;
}

int main()
{
    int src=0,dest=10;
    rec(src,dest);
}