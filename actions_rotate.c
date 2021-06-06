#include "include.h"

void ra(t_node **a)
{
    int temp;
    temp = pop(a);
    push_end(a, temp);
}

void rb(t_node **b)
{
    int temp;
    temp = pop(b);
    push_end(b,temp);
}

void rr(t_node **a, t_node **b)
{
    ra(a);
    rb(b);
}