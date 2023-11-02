#include <iostream>
#include <vector>

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

void bubbleSort(Node* head) {
    if (head == nullptr) {
        return;
    }

    std::vector<Node*> pointers;

    // Store pointers to nodes in the linked list
    Node* current = head;
    while (current != nullptr) {
        pointers.push_back(current);
        current = current->next;
    }

    int n = pointers.size();

    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (pointers[j]->data > pointers[j + 1]->data) {
                std::swap(pointers[j], pointers[j + 1]);
            }
        }
    }

    // Reconnect nodes after sorting
    for (int i = 0; i < n - 1; ++i) {
        pointers[i]->next = pointers[i + 1];
    }
    pointers[n - 1]->next = nullptr;
}

void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

int main() {
    Node* head = new Node(30);
    head->next = new Node(10);
    head->next->next = new Node(50);
    head->next->next->next = new Node(20);

    std::cout << "Original Linked List: ";
    printList(head);

    bubbleSort(head);

    std::cout << "Sorted Linked List: ";
    printList(head);

    // Clean up memory (delete nodes)
    Node* current = head;
    while (current != nullptr) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}
