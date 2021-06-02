#include "includes.h"
void pa(struct stack_node **a, struct stack_node **b )
{
    if(isEmpty(*b))
        return;
    else
        push(a, pop(b));
}

void pb(struct stack_node **a, struct stack_node **b)
{
    if(isEmpty(*a))
            return;
    else
        push(b, pop(a));  
}
