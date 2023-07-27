#include <iostream>
#include <string>

using namespace std;

class Students
{
private:
    int n,roll_no,marks;
    string name;
public:
    Students() : n(0)
    {
    }
    void set(){
        cout<<"Enter Student name:";
        cin>>name;
        cout<<"Enter Student Roll no:";
        cin>>roll_no;
        cout<<"Enter Student Marks:";
        cin>>marks;
    }
    void get(){
        cout<<"The name of Student is:"<<name<<endl;
        cout<<"The Roll no of "<<name<<" is:"<<roll_no<<endl;
        cout<<"The Marks of "<<name<<" is:"<<marks<<endl;
    }
};
int main()
{
    Students S1,S2;
    S1.set();
    cout<<"---------1st Student-----------"<<endl;
    S1.get();
    cout<<"---------2nd Student-----------"<<endl;
    S2=S1;
    S2.get();
}
