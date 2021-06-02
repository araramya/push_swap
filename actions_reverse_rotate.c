#include "includes.h"

 void rra(struct stack_node **a)
{
    int temp;
    temp = pop_end(a);
    push(a,temp);
}

void rrb(struct stack_node **b)
{
    int temp;
    temp = pop_end(b);
    push(b, temp);
}

void rrr(struct stack_node **a, struct stack_node **b)
{
    rra(a);
    rrb(b);
}