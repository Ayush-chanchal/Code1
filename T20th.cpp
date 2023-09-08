#include <iostream>
using namespace std;

int main()
{
    int n, w, x, y, z;
    cout << "Enter an Amount (it should be in integer):";
    cin >> n;
    switch (1)
    {
    case 1:
        x = n / 100;
        n = n - (x * 100);
        switch (1)
        {
        case 1:
            y = n / 50;
            n = n - (y * 50);
            switch (1)
            {
            case 1:
                z = n / 20;
                n = n - (z * 20);
                switch (1)
                {
                case 1:
                    w = n / 1;
                }
            }
        }
        cout << "100: " << x << endl;
        cout << "50: " << y << endl;
        cout << "20: " << z << endl;
        cout << "1: " << w << endl;
        break;
    }
}