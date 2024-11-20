#include <iostream>
#include "LinkedList.h"

IntNode* initIntNode(unsigned int value)
{
    IntNode* n = new IntNode; 
    n->num = value;
    n->next = NULL; 
    return n; 
}

void freeList(IntNode* head)
{
    IntNode* current = head;
    IntNode* temp = NULL;
    while (current)
    {

        temp = current; 
        current = current->next; 
        delete temp;
    }
}

IntNode* addEnd(IntNode* head, IntNode* n)
{
    if (head == NULL) return n;
    IntNode* current = head;

    while (current->next != NULL) 
        current = current->next; 

    current->next = n; 
    return head;
}

IntNode* getEnd(IntNode* head) 
{
    IntNode* current = head; 

    while (current->next != NULL) 
        current = current->next; 
    return current;
}

IntNode* removeEnd(IntNode* head)
{
    IntNode* current = head;

    if (current->next == NULL) return NULL;

    while (current->next->next != NULL) current = current->next;
    current->next = NULL;
    return head;
}