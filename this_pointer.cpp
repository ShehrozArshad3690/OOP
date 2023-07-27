#include <iostream>

using namespace std;

class pointer
{
private:
    int n;

public:
    void set(int n)
    {
        this->n = n;
    }
    void show()
    {
        cout << n << endl;
    }
};
int main()
{
    pointer p;
    p.set(4);
    p.show();
}
