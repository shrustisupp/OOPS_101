#include<iostream>
using namespace std;

class rectangle
{
    int l;
    int b;

    rectangle()
    {
        l=0;
        b=0;
    }

    rectangle(int x, int y)
    {
        l=x;
        b=y;
    }

    rectangle(rectangle &z)
    {
        l=z-l;
        b=z-b;

    }
};

int main()
{
    rectangle r1;
    rectangle r1(4,5);
    rectangle r2(r1);
}
