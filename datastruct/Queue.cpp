#include "Queue.h"
#include <iostream>

void initQueue(Queue* q, unsigned int size)
{
    q->_data = new unsigned int[size];
    q->_size = size;
    q->_count = 0;
    for (unsigned int i = 0; i < size; i++)
    {
        q->_data[i] = NULL;
    }
}

void enqueue(Queue* q, unsigned int newValue)
{
    if (q->_count == q->_size)
    {
        return;
    }

    for (unsigned int i = 0; i < q->_size; i++)
    {
        if (q->_data[i] == NULL)
        {
            q->_data[i] = newValue;
            q->_count++;
            break;
        }
    }
}

int dequeue(Queue* q)
{
    if (q->_count == 0)
    {
        return -1;
    }

    int temp = -1;
    for (unsigned int i = 0; i < q->_size; i++)
    {
        if (q->_data[i] != NULL)
        {
            temp = q->_data[i];
            q->_data[i] = NULL;
            q->_count--;
            break;
        }
    }
    return temp;
}

void cleanQueue(Queue* q)
{
    delete[] q->_data;
    q->_data = nullptr;
    q->_size = 0;
    q->_count = 0;
}

bool isEmpty(Queue* q)
{
    return q->_count == 0;
}

bool isFull(Queue* q)
{
    return q->_count == q->_size;
}
