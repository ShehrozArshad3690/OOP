#include<iostream>

using namespace std;

class employee{
    public:
        void show(){
            cout<<"this is base function call";
        }
};
class programmer:virtual public employee{

};
class engineer:virtual public employee{

};
class expert:public programmer,public engineer{

};
int main()
{
 expert obj;
 obj.show();        //here compiler gets confused to call the show funtion from two paths but by virtual keyword compiler automatically decides(as its own) the path to call the show() funtion where from programmer class or engineer class    
}
