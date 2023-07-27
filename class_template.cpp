#include<iostream>

using namespace std;

template<class T>
class person{
private:
T n;
public:
void show(){
    cout<<n<<endl;
}
void input(){
    cout<<"Enter your number:";
    cin>>n;
}
};
main(){
    person<int> T1;
    cout<<"Enter Integer value"<<endl;
    T1.input();
    T1.show();
    person<float> T2;
    cout<<"Enter float value"<<endl;
    T2.input();
    T2.show();
    person<string> T3;
    cout<<"Enter String name"<<endl;
    T3.input();
    T3.show();
}
