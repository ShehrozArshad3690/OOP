#include <iostream>

using namespace std;

class Counter
{
private:
    static int count;
public:
    Counter()
    {
        count++;
    }
    void show(){
        cout<<"No of objects:"<<count<<endl;
    }
};
int Counter::count=0;
main()
{
    Counter C1,C2,C3;
    C1.show();
}
