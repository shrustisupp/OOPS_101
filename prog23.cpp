#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
protected:
    string name;
    string birthday;

public:
    // Constructor
    Person(string n, string b) {
        name = n;
        birthday = b;
    }

    // Virtual print function
    virtual void print() {
        cout << "Name: " << name << endl;
        cout << "Birthday: " << birthday << endl;
    }
};

// Derived class: Student
class Student : public Person {
private:
    string major;

public:
    // Constructor
    Student(string n, string b, string m) : Person(n, b) {
        major = m;
    }

    // Overriding print function
    void print() override {
        Person::print();
        cout << "Major: " << major << endl;
    }
};

// Derived class: Instructor
class Instructor : public Person {
private:
    double salary;

public:
    // Constructor
    Instructor(string n, string b, double s) : Person(n, b) {
        salary = s;
    }

    // Overriding print function
    void print() override {
        Person::print();
        cout << "Salary: " << salary << endl;
    }
};

// Main function
int main() {
    Student s("Shravani", "15-08-2003", "Electronics");
    Instructor i("Dr. Rao", "10-05-1980", 75000);

    cout << "\nStudent Details:\n";
    s.print();

    cout << "\nInstructor Details:\n";
    i.print();

    return 0;
}
