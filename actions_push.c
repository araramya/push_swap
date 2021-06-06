#include "include.h"
void pa(t_node **a, t_node **b )
{
    if(is_empty(*b))
        return;
    else
        push(a, pop(b));
}

void pb(t_node **a, t_node **b)
{
    if(is_empty(*a))
            return;
    else
        push(b, pop(a));  
}
