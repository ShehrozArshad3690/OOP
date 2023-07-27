#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter 1st number:";
    cin >> a;
    cout << "Enter 2nd number:";
    cin >> b;
    if (b != 0)
    {
        c = a / b;
        cout << "The result is:" << c << endl;
    }
    else
        cout << "Cannot divided by zero";
}
