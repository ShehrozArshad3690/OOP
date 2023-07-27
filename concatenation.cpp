#include <iostream>
#include <string.h>

using namespace std;

class String
{
private:
    string n;

public:
    String() : n("")
    {
    }
    String(string m)
    {
        n = m;
    }
    void show()
    {
        cout << n << endl;
    }
    void operator+(String S)
    {
        String t;
        t.n = n + S.n;
        cout<<t.n<<endl;
    }
};
int main()
{
    String S1("Shehroz"), S2(" Arshad");
    S1.show();
    S2.show();
    //  S1+S2;
    S1.operator+(S2);
}
