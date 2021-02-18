#ifndef LINKEDLIST_INTLIST_H
#define LINKEDLIST_INTLIST_H
#include <iostream>
using namespace std;

struct Node{
    int num;
    Node* next;
    Node(int num) : num(num), next(0) {}
};

class IntList {
private:
    Node* head;
    Node* tail;
public:
    IntList() : head(nullptr), tail(nullptr) {}
    void PrintList() {
        Node* currNode = head;
        if (currNode == nullptr) {
            cout << "List Empty" << endl;
            return;
        }
        while (currNode != nullptr) {
            cout << currNode->num << " ";
            currNode = currNode->next;
        }
        cout << endl;
    }
    void push_back(int);
    void pop_back();    // pops last element
    void remove(int);   // removes element at given index
};


#endif //LINKEDLIST_INTLIST_H
