#include <iostream>

using namespace std;

class parent
{
public:
    void show()
    {
        cout<<"The parent class.";
    }
};
class child : public parent
{
public:
    void show()
    {
        // parent::show();          //this line also shows overriding by class name with scope resolution and the member funtion of base class
        cout<<"The Child class.";
    }
};
int main()
{
    parent p1;
    p1.show();
    child ch1;
    ch1.show();         //object of derived class shows the member function of derive class because it is overriding the base class member funtion
    cout<<endl;
    ch1.parent::show();     //this line connects the object of derived class with the base class and scope resolution(::) with this is use to access the member function of base class
}
