#include "../includes/include.h"

void sort5(t_node **a, t_node **b)
{
   if(!stack_check(*a))
    {
        min_to_top(a);
        pb(a,b); 
        min_to_top(a); 
        pb(a,b); 
        sort3(a);
        pa(a,b);
        pa(a,b);
    }
    return ;
}
void sort4(t_node **a, t_node **b)
{
    if(!stack_check(*a))
    {
        min_to_top(a);
        pb(a,b);
        sort3(a);
        pa(a,b);
    }
    return ;
}
