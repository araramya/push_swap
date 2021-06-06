#include "../includes/include.h"

void sort3(t_node **a)
{
    if( ((*a)->next->next->data > (*a)->data) && (((*a)->data > (*a)->next->data)))
        sa(*a); // 213
    else if(((*a)->next->next->data < (*a)->next->data) && ((*a)->next->data < (*a)->data))
        {
            sa(*a);
            rra(a); // 321
        }
    else if(((*a)->next->data < (*a)->next->next->data) && ((*a)->next->next->data < (*a)->data))
        ra(a); //312
    else if(((*a)->data < (*a)->next->next->data ) && ((*a)->next->next->data < (*a)->next->data))
        {
            sa(*a); 
            ra(a);// 132
        }
    else if(((*a)->next->data > (*a)->data) && ((*a)->data > (*a)->next->next->data) )
        rra(a);
    else
        return;
    
}