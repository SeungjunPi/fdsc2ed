#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK_SIZE 100

typedef struct
{
    int key;
} element;

element stack[MAX_STACK_SIZE];
int top;

void push (element item)
{
    if (top >= MAX_STACK_SIZE -1)
        stackFull();
    stack[++top]=item;
}

element pop()
{
    if (top == -1)
        return stackEmpty();
    return stack[top--];
}

element stackEmpty(){
    printf("Stack is Empty\n");
    exit (EXIT_FAILURE);
}

void stackFull(){
    fprintf(stderr, "Stack is full, cannot add element");
    exit (EXIT_FAILURE);
}


int main()
{
    
    return 0;
}
