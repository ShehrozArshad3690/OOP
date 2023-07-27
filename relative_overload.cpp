#include <iostream>

using namespace std;

class relation
{
private:
    int feet;
    float inches;

public:
    relation() : feet(0), inches(0)
    {
    }
    relation(int ft, float in) : feet(ft), inches(in)
    {
    }
    void show()
    {
        cout << "Feets:" << feet << " and Inches:" << inches << endl;
    }
    int operator <(relation r)
    {
        if ((feet < r.feet) && (inches < r.inches))
            return 1;
        else
            return 0;
    }
};
int main()
{
    relation r1(3, 1.3), r2(8, 3.5);
    r1.show();
    r2.show();
    if (r1 < r2)
        cout << "r2 is greater than r1" << endl;
    else
        cout << "r1 is greater than r2" << endl;
}
