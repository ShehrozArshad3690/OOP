#include <iostream>

using namespace std;

class Sum
{
private:
    int n;

public:
    Sum() {}
    Sum(Sum &s3)
    {
        n=s3.n;
        cout << "this is copy constructor value:"<<n<<endl;
    }
    void set()
    {
        cout << "Enter number:";
        cin >> n;
    }
    void show(){
        cout<<"This is S1 value:"<<n<<endl;
    }
};
int main()
{
    Sum s1;
    s1.set();
    s1.show();
    Sum s2(s1);
}
