#include <iostream>

using namespace std;

class Test
{
public:
    void show()
    {
        cout << "This is pointer object call.";
    }
};
int main()
{
    Test *T1[5];
    for (int i = 0; i < 5; i++)
    {
        T1[i]=new Test;
        T1[i]->show();
    }
}
