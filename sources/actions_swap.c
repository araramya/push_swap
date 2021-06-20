#include "../includes/include.h"

void sa(t_node *a)
{
    int temp;
    if(stack_size(a) <= 1)
        return;
    temp = a->data;
    a->data = a->next->data;
    a->next->data = temp;
    count++;
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
    count++;
    write(1, "sb\n", 3);
}

void ss(t_node *a, t_node *b)
{
   int temp;
    if(stack_size(a) <= 1)
        return;
    temp = a->data;
    a->data = a->next->data;
    a->next->data = temp;
    int temp1;
    if(stack_size(b) <= 1)
        return;
    temp1 = b->data;
    b->data = b->next->data;
    b->next->data = temp1;
   count++;
    write(1, "ss\n", 3);
}