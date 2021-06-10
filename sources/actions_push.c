#include "../includes/include.h"
void pa(t_node **a, t_node **b )
{
    if(is_empty(*b))
        return;
    else
    {
        push(a, pop(b));
        count++;
        write(1, "pa\n", 3);
    }
}

void pb(t_node **a, t_node **b)
{
    if(is_empty(*a))
            return;
    else
    {
        push(b, pop(a));
        count++;
        write(1, "pb\n", 3); 
    } 
}
