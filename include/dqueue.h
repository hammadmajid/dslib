// Dynamic Queue implemented with linked list
// Author: Ammad Qureshi 23122--

#ifndef DQUEUE_H
#define DQUEUE_H

template <typename T>
class DQueue {
    struct Node {

    };

    Node *front;
    Node *rear;
public:
    DQueue(): front(nullptr), rear(nullptr) {
    }

    void enqueue(T data) {}
    void dequeue() {}

    T getFront() {}
    T getRear() {}

    bool isEmpty() {}
    void printQueue() {}
};

#endif