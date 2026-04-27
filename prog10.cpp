#include<iostream>
#include<string>
using namespace std;

inline double cube(double s)
{
    return s*s*s;
}
int main()
{
    cout<<"the cube of 3 is:"<<cube(3)<<endl;
    cout<<"the cube of 4 is:"<<cube(4)<<endl;
    return 0;
}
