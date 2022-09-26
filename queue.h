#ifndef QUEUE_H
#define QUEUE_H

class queue{
    public:
    virtual void enQ(int item)=0;
    virtual int dQ()=0;
    virtual bool isEmpty()=0;
    virtual int viewFront()=0;
    virtual int viewBack()=0;
};

#endif