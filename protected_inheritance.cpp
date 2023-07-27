#include <iostream>

using namespace std;

class parent
{
private:
    // int n1;
protected:
    int n1;
    int n2;

public:
    void show()
    {
        cout << "The value of n1:" << n1 << endl;
        cout << "The value of n2:" << n2 << endl;
    }
};
class child : protected parent
{
public:
    void input()
    {
        cout << "Enter the value of n1:";
        cin >> n1;
        cout << "Enter the value of n2:";
        cin >> n2;
        show();
    }
};
int main()
{
    child obj1;
    obj1.input();
    // obj1.show();
}
