#include <iostream>

using namespace std;

class person
{
public:
    virtual void show()
    {
        cout << "This is person.";
    }
};
class employee : public person
{
public:
    void show()
    {
        cout << "This is employee.";
    }
};
class prog : public employee
{
public:
    void show()
    {
        cout << "This is programmer.";
    }
};
int main()
{
    person p1;
    employee e1;
    prog pg1;
    person *p2;
    p2 = &p1;       //p2 = new person;
    p2->show();
    p2 = &e1;       //p2 = new employee;
    p2->show();
    p2 = &pg1;      //p2 = new prog;
    p2->show();
}
