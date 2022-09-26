#ifndef LINKEDLISTQUEUE_H
#define LINKEDLISTQUEUE_H

#include "queue.h"
#include "linkedlist.cpp"

class  linkedlistqueue:public queue{
    public:
    LinkedList l3;

    void enQ(int item);
    int dQ();
    bool isEmpty();
    bool isFull();
    int viewFront();
    int viewBack();
};

#endif