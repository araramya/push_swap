#include "../includes/include.h"

void ra(t_node **a)
{
    int temp;
    temp = pop(a);
    push_end(a, temp);
    write(1, "ra\n", 3);
}

void rb(t_node **b)
{
    int temp;
    temp = pop(b);
    push_end(b,temp);
    write(1, "rb\n", 3);
}

void rr(t_node **a, t_node **b)
{
    ra(a);
    rb(b);
    write(1, "rr\n", 3);
}