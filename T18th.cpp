#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    char a = 'a';
    while (true)
    {
        switch (a)
        {
        case 'a':
            cout << "First";

        case 'b':
            cout << "Second";
            exit(5);
        }
    }
}