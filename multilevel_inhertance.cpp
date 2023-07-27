#include <iostream>
#include <string.h>

using namespace std;

class person
{
private:
    string name, gender;
    int age;

public:
    void input()
    {
        cout << "Enter your name:";
        cin >> name;
        cout << "Enter your gender:";
        cin >> gender;
        cout << "Enter your age:";
        cin >> age;
    }
    void show()
    {
        cout << "Your name is:" << name << endl;
        cout << "Your gender is:" << gender << endl;
        cout << "Your age is:" << age << endl;
    }
};



class employee : public person
{
private:
    float sal;

public:
    void input()
    {
        person::input();   //this line connects the input function of person class within the input function of employee class or we can say it is function overridding
        cout << "Enter your salary:";
        cin >> sal;
    }
    void show()
    {
        person::show();     //similiar as above  or we can say it is function overridding
        cout << "Your salary is:" << sal << endl;
    }
};



class programer : public employee
{
private:
    int n;

public:
    void input()
    {
        employee::input();      //similiar as above or we can say it is function overridding
        cout << "How many languages you know:";
        cin >> n;
    }
    void show()
    {
        employee::show();       //similiar as above or we can say it is function overridding
        cout << "You know " << n << " languages" << endl;
    }
};



int main()
{
    programer p1;
    p1.input();
    p1.show();
}
