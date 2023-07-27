#include<iostream>

using namespace std;

class Test{
    private:
        int n;
    public:
        Test():n(0)
        {

        }
        void operator ++(int){
            n++;
            cout<<"The value of number is:"<<n<<endl;
        }
        void operator --(int){
            --n;
            cout<<"The value of number is:"<<n<<endl;
        }
};
int main()
{
 Test T1;
 cout<<"Increment";
 T1++;   
 cout<<"Decrement";
 T1--;
}
