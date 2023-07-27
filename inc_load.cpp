#include<iostream>

using namespace std;

class Distance{
    private:
        int feet;
        float inches;
    public:
        Distance():feet(0),inches(0)
        {

        }
        Distance(int ft,float in):feet(ft),inches(in){
            
        }
        void show(){
            cout<<"Feet:"<<feet<<"Inches:"<<inches<<endl;
        }
        void operator ++(){
            feet++;
            inches++;
            cout<<"Feet:"<<feet<<"Inches:"<<inches<<endl;
        }
};
int main()
{
 Distance D1(4,9.2);  
 cout<<"Before"<<endl; 
 D1.show();
 cout<<"After"<<endl;
 ++D1;
}
