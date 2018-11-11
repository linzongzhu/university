#include "../../myhead.h"
#include <iomanip>
template<typename elemtype>
class SqQueue
{
public:
    void clear();

    Status deQueue(ElemType &e);

    Status enQueue(ElemType e);

    Status getFront(ElemType &e);

    int getLength();

    bool isEmpty();

    bool isFull();

    SqQueue<ElemType> operator = (SqQueue<ElemType> rightQ);

    SqQueue(int size = 0);

    virtual ~SqQueue();

    SqQueue(const SqQueue<ElemType> &otherQ);

protected:
    int rear;
    int front;
    int queueSize;
    ElemType *base;
};

template<typename elemtype>
void SqQueue<elemtype>::clear()
{
    front = rear;
}

template<typename elemtype>
bool SqQueue<elemtype>::deQueue(elemtype &e)
{
    if(isEmpty())
        return false;

    e = base[front];
    front = (front + 1) % queueSize;
    return true;
}

template<typename elemtype>
bool SqQueue<elemtype>::enQueue(elemtype e)
{
    if(isFull)
        return false;
    base[rear] = e;
    rear = (rear + 1) % queueSize;
    return true;
}

template<typename elemtype>
bool SqQueue<elemtype>::getfront(elemtype &e)
{
    if(isEmpty())
        return false;

    e = base[front];
    return true;
}

template<typename elemtype>
int SqQueue<elemtype>::getLength()
{
    return (rear - front + queueSize) % queueSize;
}

template<typename elemtype>
bool SqQueue<elemtype>::isEmpty()
{
    return front == rear ? true : false;
}

template<typename elemtype>
bool SqQueue<elemtype>::isFull()
{
    return (rear + 1) % queueSize == front ? true : false;
}

template<typename elemtype>
SqQueue<elemtype> SqQueue<elemtype>::operator = (SqQueue<elemtype> rightQ)
{
    if(this != &rightQ)
    {
        delete[] base;
        base = new elemtype[rightQ.queueSize];
        assert(base != 0);
        queueSize = rightQ.ququeSize;
        front = rightQ.front;
        rear = rightQ.rear;
        for(int j = front; j % queueSize != rear;)
        {
            base[j] = rightQ.base[j];
            j = (j + 1) % queueSize;
        }
    }
    return *this;
}

template<typename elemtype>
SqQueue<elemtype>::SqQueue (int size)
{
    base = new elemtype[size];
    assert(base != 0);

    front = rear = 0;
    queueSize = size;
}

template<typename elemtype>
SqQueue<elemtype>::~SqQueue()
{
    delete[] base;
}

template<typename elemtype>
SqQueue<elemtype>::SqQueue(const SqQueue<elemtype> &otherQ)
{
    base = new elemtype[otherQ.queueSize];
    assert(base != 0);
    queueSize = otherQ.queueSize;

    front = otherQ.front;
    rear = otherQ.rear;
    for(int j = front; j % queueSize != rear;)
    {
        base[j] = otherQ.base[j];
        j = (j + 1) % queueSize;
    }
}

