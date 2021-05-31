#include "includes.h"
void pa(struct stack_node **a, struct stack_node **b )
{
    if(isEmpty(*b))
        return;
    else
    {
        push(a, peek(*b));
        pop(b);
    }
}

void pb(struct stack_node **a, struct stack_node **b)
{
    if(isEmpty(*a))
            return;
    else
    {
        push(b, peek(*a));
        pop(a);
    }   
}
