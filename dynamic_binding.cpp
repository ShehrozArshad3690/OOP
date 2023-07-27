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
    int len;
    cout<<"How many objects you wanna create:";
    cin>>len;
    person *ptr[len];
    cout << "Enter choice\n1-for person class\n2-for employee class\n3-for programmer class"<<endl;
    int op;
    //for inputting the object in indexes through pointer
    for (int i = 0; i < len; i++)
    {
        cout << "which class you wanna create:";
        cin >> op;
        if (op == 1)
            ptr[i] = new person;
        else if (op == 2)
            ptr[i] = new employee;
        else
            ptr[i] = new prog;
    }
    //for showing the values of object from indexes through
    for (int i = 0; i < len; i++)
    {
        ptr[i]->show();
        cout<<endl;
    }   
}
