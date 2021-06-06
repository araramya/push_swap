#include "include.h"

 void rra(t_node **a)
{
    int temp;
    temp = pop_end(a);
    push(a,temp);
}

void rrb(t_node **b)
{
    int temp;
    temp = pop_end(b);
    push(b, temp);
}

void rrr(t_node **a, t_node **b)
{
    rra(a);
    rrb(b);
}