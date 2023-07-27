#include<iostream>

using namespace std;

class Test{
    private:
        int n;
    public:
        static void show(){
            cout<<"Hello World!"<<endl;
        }
};
main()
{
//  Test::show();   
Test * s1;
s1=new Test;
s1->show();
}
