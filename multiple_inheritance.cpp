#include <iostream>
#include <string.h>

using namespace std;

class stdata
{
private:
    string name, city;

public:
    void input_data()
    {
        cout << "Enter your name:";
        cin >> name;
        cout << "Enter your city:";
        cin >> city;
    }
    void show_data()
    {
        cout << "Your name is:" << name << endl;
        cout << "Your city name is:" << city << endl;
    }
};
class stmarks
{
private:
    float mth, phy, comp, total, avg;

public:
    void input_marks()
    {
        cout << "Enter your math marks:";
        cin >> mth;
        cout << "Enter your physics marks:";
        cin >> phy;
        cout << "Enter your computer marks:";
        cin >> comp;
        cout << "Enter your total marks:";
        cin >> total;
        cout << "Enter your average marks:";
        cin >> avg;
    }
    void show_marks()
    {
        cout << "Your marks in math is:" << mth << endl;
        cout << "Your marks in physics is:" << phy << endl;
        cout << "Your marks in computer is:" << comp << endl;
        cout << "Your total marks:" << total << endl;
        cout << "Your average marks:" << avg << endl;
    }
};
class result : public stdata, public stmarks
{
public:
    void show_result()
    {
        show_data();
        show_marks();
    }
};
main()
{
    result r1;
    cout<<"-----------Enter Your Data----------------"<<endl;
    r1.input_data();
    cout<<"-----------EnterYour Marks----------------"<<endl;
    r1.input_marks();
    cout<<"-----------Your Result----------------"<<endl;
    r1.show_result();
}
