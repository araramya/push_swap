#include "../includes/include.h"

void sa(t_node *a)
{
    int temp;
    if(stack_size(a) <= 1)
        return;
    temp = a->data;
    a->data = a->next->data;
    a->next->data = temp;
    write(1, "sa\n", 3);
}

void sb(t_node *b)
{
    int temp;
    if(stack_size(b) <= 1)
        return;
    temp = b->data;
    b->data = b->next->data;
    b->next->data = temp;
    write(1, "sb\n", 3);
}

void ss(t_node *a, t_node *b)
{
    sa(a);
    sb(b);
    write(1, "ss\n", 3);
}