#include<iostream>

using namespace std;

class parent{
    public:
        parent(){
            cout<<"Constructor of parent is called"<<endl;
        }
        ~parent(){
            cout<<"Destructor of parent is called"<<endl;
        }
};
class child:public parent{
    public:
    child(){
        cout<<"Constructor of child is called"<<endl;
    }
    ~child(){
        cout<<"Destructor of child is called"<<endl;
    }
};
int main()
{
 child p1;   
}
