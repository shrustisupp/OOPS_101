
#include <iostream>
using namespace std;

// Custom Exception Classes
class StackOverflowException {
public:
    const char* what() {
        return "Stack Overflow: Cannot push element, stack is full.";
    }
};

class StackUnderflowException {
public:
    const char* what() {
        return "Stack Underflow: Cannot pop element, stack is empty.";
    }
};

class Stack {
private:
    int *arr;
    int top;
    int capacity;

public:
    // Constructor
    Stack(int size) {
        capacity = size;
        arr = new int[capacity];
        top = -1;
    }

    // Push operation
    void push(int x) {
        if (top == capacity - 1) {
            throw StackOverflowException();
        }
        arr[++top] = x;
        cout << x << " pushed into stack\n";
    }

    // Pop operation
    int pop() {
        if (top == -1) {
            throw StackUnderflowException();
        }
        return arr[top--];
    }

    // Peek operation
    int peek() {
        if (top == -1) {
            throw StackUnderflowException();
        }
        return arr[top];
    }

    // Destructor
    ~Stack() {
        delete[] arr;
    }
};

int main() {
    Stack s(3);

    try {
        s.push(10);
        s.push(20);
        s.push(30);

        // This will cause overflow
        s.push(40);
    }
    catch (StackOverflowException &e) {
        cout << e.what() << endl;
    }

    try {
        cout << "Popped: " << s.pop() << endl;
        cout << "Popped: " << s.pop() << endl;
        cout << "Popped: " << s.pop() << endl;

        // This will cause underflow
        cout << "Popped: " << s.pop() << endl;
    }
    catch (StackUnderflowException &e) {
        cout << e.what() << endl;
    }

    return 0;
}
