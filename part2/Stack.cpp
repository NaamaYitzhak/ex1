#include <iostream>
#include "Stack.h"

void push(Stack* s, unsigned int element)
{
	s->top = addEnd(s->top, initIntNode(element));
	s->count++;
}
int pop(Stack* s)
{
	if (s->count == 0)
		return 0;
	int number = getEnd(s->top)->num;
	s->top = removeEnd(s->top);
	s->count--;
	return number;
}
void initStack(Stack* s)
{
	s->top = NULL;
	s->count = 0;
}
void cleanStack(Stack* s)
{
	freeList(s->top);
	s->top = NULL;
	s->count = 0;

}
bool isEmpty(Stack* s)
{
	return s->count == 0;
}
bool isFull(Stack* s)
{
	return false;

}
