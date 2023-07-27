#include<iostream>

using namespace std;

class overload{
    private:
        int n;
    public:
        void set(){
            cout<<"Enter number:";
            cin>>n;
        }
        void operator +(overload obj){
            overload T;
            T.n=n+obj.n;
            cout<<"Total sum is:"<<T.n;
        }
};
int main()
{
 overload obj1,obj2;   
 cout<<"1st object"<<endl;
 obj1.set();
 cout<<"2nd object"<<endl;
 obj2.set();
//  obj1.operator+(obj2);
obj1+obj2;
}
