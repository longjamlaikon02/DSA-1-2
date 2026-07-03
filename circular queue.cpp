#include <iostream>
using namespace std;

const int SIZE = 5;

int queue[SIZE];
int front = -1, rear = -1;

// Enqueue
void enqueue(int value) {
    if ((rear + 1) % SIZE == front) {
        cout << "Queue Overflow!" << endl;
        return;
    }

    if (front == -1) {
        front = rear = 0;
    } else {
        rear = (rear + 1) % SIZE;
    }

    queue[rear] = value;
    cout << value << " inserted into queue." << endl;
}

// Dequeue
void dequeue() {
    if (front == -1) {
        cout << "Queue Underflow!" << endl;
        return;
    }

    cout << queue[front] << " removed from queue." << endl;

    if (front == rear) {
        front = rear = -1;
    } else {
        front = (front + 1) % SIZE;
    }
}

// Display
void display() {
    if (front == -1) {
        cout << "Queue is Empty!" << endl;
        return;
    }

    cout << "Queue elements: ";

    int i = front;
    while (true) {
        cout << queue[i] << " ";

        if (i == rear)
            break;

        i = (i + 1) % SIZE;
    }

    cout << endl;
}

int main() {
    int choice, value;

    do {
        cout << "\n--- CIRCULAR QUEUE MENU ---" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                enqueue(value);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                cout << "Program Ended." << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while (choice != 4);

    return 0;
}
