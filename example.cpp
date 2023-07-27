#include <iostream>

using namespace std;

class parent
{
public:
    virtual void print()        //due to use of virtual keyword pointer of base class ptr becomes dynamic type from static type(virtual allows the funtion to late binding)
    {
        cout << "Base print";
    }
    void show()                 //here no use of virtual function for overriding so pointer of base class ptr remains static
    {
        cout << "base show";    //early binding
    }
};
class child : public parent
{
public:
    void print()
    {
        cout << "Child print";  //late binding
    }
    void show()
    {
        cout << "Child show";
    }
};
int main()
{
    parent *ptr;
    child c1;
    ptr=&c1;
    ptr->print();
    cout<<endl;
    ptr->show();
}
