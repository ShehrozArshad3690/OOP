#include <iostream>

using namespace std;

class person            //this is abstract class bcz of pure virtual function and we cannot create its object. we can create its pointer
{
public:
    virtual void show() = 0;        //pure virtual funtion
};
class employee : public person      //this is concrete class bcz we can create its objects
{
public:
    void show()
    {
        cout << "This is employee class";
    }
};
class prog : public employee        //this is concrete class bcz we can create its objects
{
public:
    void show()
    {
        cout << "This is programmer class";
    }
};
int main()
{
    person *p1[2];
    // employee e1;
    // p1[0]=&e1;
    p1[0]=new employee;
    p1[0]->show();
    cout<<endl;
    p1[1]=new prog;
    p1[1]->show();
}
