#include <iostream>

using namespace std;

template <class T>
T maxp(T n, T m)
{
    if (n > m)
        return n;
    else
        return m;
}
main()
{
    cout<<"The larger number is:"<<maxp(4,6)<<endl;
    cout<<"The larger number is:"<<maxp(34.9,56.8)<<endl;
}
