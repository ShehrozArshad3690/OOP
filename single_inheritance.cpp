#include <iostream>

using namespace std;

class parent
{
private:
    int n, m;

public:
    parent(int s, int f)
    {
        n = s;
        m = f;
    }
    void show()
    {
        cout << "The first value of parent is:" << n << endl;
        cout << "The second value of parent is:" << m << endl;
    }
};
class child: public parent
{
private:
    int h, d;

public:
    child(int s, int f, int k, int l) : parent(s,f)
    {
        h = k;
        d = l;
    }
    void display()
    {
        cout << "The first value of child is:" << h << endl;
        cout << "The second value of child is:" << d << endl;
    }
};
int main()
{
    child obj1(3,7,9,5);
    obj1.show();
    obj1.display();
}
