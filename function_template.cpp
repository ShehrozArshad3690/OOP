#include<iostream>

using namespace std;

template<class T>
T print(T n){
    cout<<n<<endl;
}
main()
{
    print(5);
    print(567.7);
    print("Shehroz");
    print(true);
}
