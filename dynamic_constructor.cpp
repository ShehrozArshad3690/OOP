#include <iostream>

using namespace std;

class person
{
public:
person(){
    cout<<"The constructor";
}
    
};
int main()
{
    int d;
    cout << "How many objects you wanna create:";
    cin >> d;
    person *p1[d];          //this line is making pointer object of array type
    for (int i = 0; i < d; i++)
    {
        cout<<i+1<<endl;        //this line indicates the numbering by sequence
        p1[i]=new person;       //this line creates number of objects according to number of arrays
        cout<<endl;
    }
    
}
