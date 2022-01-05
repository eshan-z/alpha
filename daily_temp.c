#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct stack
{
    int *data;
    int *index;
    int top;
    int capacity;

} Stack;

Stack *create_stack(int capacity)
{
    Stack *pointer_to_stack;
    pointer_to_stack = (struct stack *)malloc(sizeof(Stack));
    pointer_to_stack->data = (int *)malloc(capacity * sizeof(int));
    pointer_to_stack->index = (int *)malloc(capacity * sizeof(int));
    pointer_to_stack->top = -1;
    pointer_to_stack->capacity = capacity;

    return pointer_to_stack;
}
int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
        return 1;

    return 0;
}

int pop(struct stack *ptr)
{
    if (isEmpty(ptr) == 1)
    {
        printf("Stack Underflow\n");
        return -1;
    }

    int a = ptr->data[ptr->top];
    ptr->top -= 1;
    return a;
}

void push(struct stack *ptr, int data)
{
    if (ptr->top == ptr->capacity - 1)
    {
        printf("Stack Overflow\n");
        return;
    }
    ptr->top += 1;

    ptr->data[ptr->top] = data;
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->capacity - 1)
        return 1;

    return 0;
}

void print_stack(struct stack *ptr)
{
    for (size_t i = 0; i <= ptr->top; i++)
    {
        printf("%d ,", ptr->data[i]);
    }
}

int *dailyTemperatures(int *temperatures, int temperaturesSize, int *returnSize)
{

    struct stack *s = create_stack(temperaturesSize);
    int *ans = (int *)calloc(temperaturesSize, sizeof(int));

    int i = 0;

    while (i < temperaturesSize)
    {

        if (isEmpty(s))
            push(i++);

        while (i < temperaturesSize && temperatures[i] <= temperatures[s->data[s->top]])
            push(s, i++);

        while (temperatures[i] > temperatures[s->data[s->top]] && s->top > -1)
            ans[s->data[s->top]] = (i - pop(s));
    }
}

int main()
{

    return 0;
}