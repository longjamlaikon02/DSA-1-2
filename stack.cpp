
#include <iostream>
using namespace std;

const int SIZE = 5;
int stack[SIZE];
int top = -1;

void push(int value) {
    if (top == SIZE - 1) {
        cout << "Stack Overflow!" << endl;
    } else {
        stack[++top] = value;
        cout << value << " pushed into stack." << endl;
    }
}

void pop() {
    if (top == -1) {
        cout << "Stack Underflow!" << endl;
    } else {
        cout << stack[top--] << " popped from stack." << endl;
    }
}

void display() {
    if (top == -1) {
        cout << "Stack is Empty!" << endl;
    } else {
        cout << "Stack elements are:" << endl;
        for (int i = top; i >= 0; i--) {
            cout << stack[i] << endl;
        }
    }
}

int main() {
    int choice, value;

    do {
        cout << "\n--- STACK MENU ---" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                cout << "Exiting..." << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }

    } while (choice != 4);

    return 0;
}
