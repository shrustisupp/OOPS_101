// example of Inheritance

#include<iostream>
using namespace std;

class vehicle
{
public:
    int speed;

    void showSpeed()
    {
        cout<<"Speed:"<<speed<<endl;

    }
};
class car: public vehicle
{
public:
    string brand;
};

int main()
{
    car c1;
    c1.speed=120;
    c1.brand="Toyota";
    cout<<"Brand:"<<c1.brand<<endl;
    c1.showSpeed();

    return 0;
}



