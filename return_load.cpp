#include <iostream>

using namespace std;

class Test
{
private:
    int n;

public:
    Test() : n(0)
    {
    }
    void set(){
        cout<<"Enter number:";
        cin>>n;
    }
    Test operator +(Test T1){
        Test T;
        T.n=n+T1.n;
        return T;
    }
    int show(){
        return n;
    }
};
int main()
{
    Test T2, T3,sum;
    cout<<"1st object"<<endl;
    T2.set();
    cout<<"2nd object"<<endl;
    T3.set();
    sum=T2+T3;
    cout<<"The sum of two is:"<<sum.show()<<endl;
}