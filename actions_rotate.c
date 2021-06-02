#include "includes.h"

void ra(struct stack_node **a)
{
    int temp;
    temp = pop(a);
    push_end(a, temp);
}

void rb(struct stack_node **b)
{
    int temp;
    temp = pop(b);
    push_end(b,temp);
}

void rr(struct stack_node **a, struct stack_node **b)
{
    ra(a);
    rb(b);
}