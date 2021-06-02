#include "includes.h"

void sa(struct stack_node *a)
{
    int temp;
    if(stack_size(a) <= 1)
        return;
    temp = a->data;
    a->data = a->next->data;
    a->next->data = temp;
}

void sb(struct stack_node *b)
{
    int temp;
    if(stack_size(b) <= 1)
        return;
    temp = b->data;
    b->data = b->next->data;
    b->next->data = temp;
}

void ss(struct stack_node *a, struct stack_node *b)
{
    sa(a);
    sb(b);
}