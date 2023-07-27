#include <iostream>

using namespace std;

class Test
{
public:
    void show()
    {
        cout << "The pointer to object";
    }
};
int main()
{
    Test *T1;
    T1 = new Test;       //this line refers the pointer object(T1) to class(Test)
    T1->show();
}
