#include <iostream>

using namespace std;

class A
{
private:
    int n;

protected:
    int m;

public:
    friend class B;
};
class B
{
public:
    void set(A obj3)
    {
        cout << "Enter 1st number:";
        cin >> obj3.n;
        cout << "Enter 2nd number:";
        cin >> obj3.m;
        cout << "The sum of two numbers is:"<<obj3.n+obj3.m;
    }
};

int main()
{
    A obj1;
    B obj2;
    obj2.set(obj1);
}
