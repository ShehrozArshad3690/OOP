#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter 1st number:";
    cin >> a;
    cout << "Enter 2nd number:";
    cin >> b;
    try
    {
        if (b == 0)
            throw 0;        //0 means false to exit from if condition and to enter catch block
        c = a / b;
        cout << "The result is:" << c << endl;
    }
    catch (int)
    {
        cout << "Cannot divided by zero";
    }
}
