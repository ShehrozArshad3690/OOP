#include <iostream>
using namespace std;

class Test
{
private:
    int n;
    double m;
public:
    Test()
    {
        cout << "Constructor called"<<endl;
    }
    Test(int num)
    {
        n = num;
        cout << "The value of number is:" << num << endl;
    }
    Test(double s){
        m=s;
        cout<<"The value of s is:"<<s<<endl;
    }
    Test(double s,int num){
        n=num;
        m=s;
        cout<<"Integer is:"<<num<<endl;
        cout<<"double is:"<<s<<endl;
    }
    Test(int num,double s){
        n=num;
        m=s;
        cout<<"Integer is:"<<num<<endl;
        cout<<"double is:"<<s<<endl;
    }
};
main()
{
    Test T1,T2(4),T3(6.8),T4(4,1.3),T5(5.9,6);
    return 0;
}