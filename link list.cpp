
#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

// Insert at end
void insert(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    cout << value << " inserted.\n";
}

// Delete first node
void deleteNode() {
    if (head == NULL) {
        cout << "List is Empty!\n";
        return;
    }

    Node* temp = head;
    cout << temp->data << " deleted.\n";
    head = head->next;
    delete temp;
}

// Display
void display() {
    if (head == NULL) {
        cout << "List is Empty!\n";
        return;
    }

    Node* temp = head;

    cout << "Linked List: ";
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    int choice, value;

    do {
        cout << "\n--- LINKED LIST MENU ---\n";
        cout << "1. Insert\n";
        cout << "2. Delete First\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                insert(value);
                break;

            case 2:
                deleteNode();
                break;

            case 3:
                display();
                break;

            case 4:
                cout << "Program Ended.\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}
