//
// Created by mini- on 13.12.2023.
//


#ifndef ASSIGNMENT_8_1_LINKEDLIST_H
#define ASSIGNMENT_8_1_LINKEDLIST_H

using namespace std;

class Node {
public:
    int value;
    Node* next;

    Node(int val) : value(val), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;
    int listSize;

public:
    LinkedList() : head(nullptr), listSize(0) {}

    ~LinkedList() {
        while (head != nullptr) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }

    void push_back(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        listSize++;
    }

    int size() {
        return listSize;
    }

    int& at(int index) {
        if (index >= listSize) throw std::out_of_range("Index out of range");
        Node* temp = head;
        for (int i = 0; i < index; ++i) {
            temp = temp->next;
        }
        return temp->value;
    }

    void remove(int index) {
        if (index >= listSize) throw std::out_of_range("Index out of range");
        Node* temp = head;
        if (index == 0) {
            head = head->next;
            delete temp;
        } else {
            for (int i = 0; i < index - 1; ++i) {
                temp = temp->next;
            }
            Node* toDelete = temp->next;
            temp->next = temp->next->next;
            delete toDelete;
        }
        listSize--;
    }
};
#endif //ASSIGNMENT_8_1_LINKEDLIST_H
