#include "IntList.h"

void IntList::push_back(int val) {
    Node* newNode = new Node(val);
    // tail = nullptr;
    if (tail == nullptr) {
        head = newNode;
        tail = head;
    }
    else {
        tail->next = newNode;
        tail = newNode;
    }
}