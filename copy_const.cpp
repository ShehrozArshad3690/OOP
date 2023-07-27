#include <iostream>

using namespace std;

class Person
{
private:
    int n;

public:
    Person() : n(0)
    {
    }
    Person(int m)
    {
        n = m;
    }
    Person(Person &sp)      //&sp simply means the address for object in order words &sp means hum ny plot ya jagha ly li but us par abhi makan(object) ni bnaya....mtlb wo jagha abhi khali hy
    {
        n = sp.n;
    }
    void show()
    {
        cout << n << endl;
    }
};
int main()
{
    Person p1, p2(45), p3(p1);
    p1.show();
    p2.show();
    p3.show();
}
