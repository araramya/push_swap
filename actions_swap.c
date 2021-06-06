#include "include.h"

void sa(t_node *a)
{
    int temp;
    if(stack_size(a) <= 1)
        return;
    temp = a->data;
    a->data = a->next->data;
    a->next->data = temp;
}

void sb(t_node *b)
{
    int temp;
    if(stack_size(b) <= 1)
        return;
    temp = b->data;
    b->data = b->next->data;
    b->next->data = temp;
}

void ss(t_node *a, t_node *b)
{
    sa(a);
    sb(b);
}