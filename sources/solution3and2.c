#include "../includes/include.h"

void sort3(t_node **a)
{
    if( ((*a)->next->next->data > (*a)->data) && (((*a)->data > (*a)->next->data)))
        sa(*a);
    else if(((*a)->next->next->data < (*a)->next->data) && ((*a)->next->data < (*a)->data))
        {
            sa(*a);
            rra(a);
        }
    else if(((*a)->next->data < (*a)->next->next->data) && ((*a)->next->next->data < (*a)->data))
        ra(a);
    else if(((*a)->data < (*a)->next->next->data ) && ((*a)->next->next->data < (*a)->next->data))
        {
            sa(*a); 
            ra(a);
        }
    else if(((*a)->next->data > (*a)->data) && ((*a)->data > (*a)->next->next->data) )
        rra(a);
    else
        return;
    
}

void sort2(t_node **a)
{
    if((*a)->next->data < (*a)->data)
        sa(*a);
}