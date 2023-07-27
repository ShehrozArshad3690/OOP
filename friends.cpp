#include <iostream>

using namespace std;
class B;
class A
{
private:
    int n;

public:
    void setA()
    {
        cout << "Enter 1st number:";
        cin >> n;
    }
    friend void add(A, B);
};
class B
{
private:
    int m;

public:
    void setB()
    {
        cout << "Enter 1st number:";
        cin >> m;
    }
    friend void add(A, B);
};

void add(A obj3, B obj4)
{
    cout << "The sum of two numbers is:" << obj3.n + obj4.m;
}
int main()
{
    A obj1;
    B obj2;
    obj1.setA();
    obj2.setB();
    add(obj1,obj2);
}
