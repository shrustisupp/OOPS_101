#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    str.assign("Hello, world!");
    cout<<str<<endl;
    str.assign("Hello, universe!",6,8);
    cout<<str<<endl;
    string other="c++ programming";
    str.assign(other,1,11);
    cout<<str<<endl;
    return 0;
}
