#include <iostream>
#include <stack>
using namespace std;

int main() {
    // Declare a stack of integers
    stack<int> myStack;

    // Push elements into the stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // Display the top element
    cout << "Top element: " << myStack.top() << endl; // Output: 30

    // Pop an element
    myStack.pop();
    cout << "Top element after pop: " << myStack.top() << endl; // Output: 20

    // Check if the stack is empty
    if (myStack.empty()) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Stack is not empty." << endl;
    }

    // Get the size of the stack
    cout << "Stack size: " << myStack.size() << endl; // Output: 2

    return 0;
}
