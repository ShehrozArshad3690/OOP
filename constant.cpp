#include <iostream>

using namespace std;

class Test
{
    int n=1;

public:
    void set()
    {
        n++;
        cout << "N:" << n << endl;
    }
};
main()
{
    Test T1;
    T1.set();
}
