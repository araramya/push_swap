#include "../includes/include.h"

 void rra(t_node **a)
{
    int temp;
    temp = pop_end(a);
    push(a,temp);
    count++;
    write(1, "rra\n", 4);
}

void rrb(t_node **b)
{
    int temp;
    temp = pop_end(b);
    push(b, temp);
    count++;
    write(1, "rrb\n", 4);
}

void rrr(t_node **a, t_node **b)
{
    rra(a);
    rrb(b);
    count++;
    write(1, "rrr\n", 4);
}