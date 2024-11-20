#include <iostream>
#include "Utils.h"
#include "Stack.h"

void reverse(int* nums, unsigned int size)
{
    Stack* stack = new Stack();
    for (int i = 0; i < size; i++)
    {
        push(stack, nums[i]);
    }
    for (int j = 0; j < size; j++)
    {
        nums[j] = pop(stack);
    }
}
int* reverse10()
{
    int* top = new int[10];
    for (int i = 0; i < 10; i++)
    {

        std::cout << "pls enter a number: ";
        std::cin >> top[i];
    }
    Stack* stack = new Stack();
    for (int i = 0; i < 10; i++)
    {
        push(stack, top[i]);
    }
    for (int j = 0; j < 10; j++)
    {
        top[j] = pop(stack);
    }
    return top;
}