
#include <iostream>
using namespace std;

const int SIZE = 5;

int queue[SIZE];
int front = -1, rear = -1;

// Enqueue
void enqueue(int value) {
    if (rear == SIZE - 1) {
        cout << "Queue Overflow!" << endl;
    } else {
        if (front == -1)
            front = 0;

        rear++;
        queue[rear] = value;

        cout << value << " inserted into queue." << endl;
    }
}

// Dequeue
void dequeue() {
    if (front == -1 || front > rear) {
        cout << "Queue Underflow!" << endl;
    } else {
        cout << queue[front] << " removed from queue." << endl;
        front++;

        // Reset queue when empty
        if (front > rear) {
            front = rear = -1;
        }
    }
}

// Display
void display() {
    if (front == -1) {
        cout << "Queue is Empty!" << endl;
    } else {
        cout << "Queue elements are: ";
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int choice, value;

    do {
        cout << "\n--- QUEUE MENU ---" << endl;
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
                cout << "Exiting..." << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }

    } while (choice != 4);

    return 0;
}
