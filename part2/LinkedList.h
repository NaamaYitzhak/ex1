#ifndef LINKEDLIST_H
#define LINKEDLIST_H


struct IntNode {
    unsigned int num;  
    IntNode* next;    
};

IntNode* initIntNode(unsigned int value);

void freeList(IntNode* head);

IntNode* addEnd(IntNode* head, IntNode* n);

IntNode* getEnd(IntNode* head);

IntNode* removeEnd(IntNode* head);

#endif // LINKEDLIST_H
