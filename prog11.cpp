// program using Class.

#include<iostream>
using namespace std;

class Student
{

    public:
      int id;
      string name;


    void display()
    {
        cout<<"Id:"<<id<<endl;
        cout<<"Name:"<<name<<endl;

    }
};

int main()
{
    Student s1,s2;     //creating object
    s1.id=101;
    s1.name="Shrusti";

    s1.display();
    s2.id=110;
    s2.name="Mansi";
    s2.display();
    return 0;
}
