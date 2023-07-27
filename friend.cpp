#include <iostream>

using namespace std;

class Test
{
private:
    int n;
    friend void show(Test);
};
void show(Test T2)
{
    T2.n = 10;
    cout << T2.n << endl;
}
int main()
{
    Test T1;
    show(T1);
}
