#include "../includes/include.h"

// void sort4(t_node **a)
// {
//     if((*a)->data > (*a)->next->data  && (*a)->data < (*a)->next->next->data)
//         sa(*a);
//     else if((*a)->data > getelem(*a, 4))
//         ra(a);
//     else if((*a)->data > getelem(*a, 2) && (*a)->data < getelem(*a, 3))
//         {
//             rra(a);
//             sa(*a);
//             ra(a);
//             ra(a);
//         }
//     else
//         return ;
// }

// void sort5(t_node **a)
// {
//     if((*a)->data > (*a)->next->data && (*a)->data < getelem(*a, 2))
//         sa(*a);
//     else if((*a)->data > getelem(*a, 4))
//         ra(a);
//     else if((*a)->data > getelem(*a, 2) && (*a)->data < getelem(*a, 3))
//     {
//         sa(*a);
//         ra(a);
//         sa(*a);
//         rra(a);
//     }
//     else if((*a)->data > getelem(*a, 3) && (*a)->data < getelem(*a, 4))
//     {
//         rra(a);
//         sa(*a);
//         ra(a);
//         ra(a);
//     }
//     else 
//         return ;
// }

// void min_to_top(t_node **a)
// {
//     int min = stack_min(*a);
//     int index = getelemindex(*a, min);
//     if(index < stack_size(*a)/2)
//     {
//         while(index-- != 0)
//         ra(a);
//     }
//     else
//     {
//         while(index++ != stack_size(*a))
//         rra(a);
//     }
    
//         // if(index <= 2)
//         // {
//         //     while(index-- > 0)
//         //         ra(a);
//         // }
//         // else if(index >= 3)
//         // {
//         //     if(stack_size(*a) == 4)
//         //         rra(a);
//         //     else
//         //     {            
//         //     while(index++ <= 4)
//         //         rra(a);
//         //     }
//         // }
// } 
void sort5(t_node **a, t_node **b)
{
   if(!stack_check(*a))
    {
        min_to_top(a);// print_stack(*a); printf("\n"); print_stack(*b); printf("\n\n");
        pb(a,b); //print_stack(*a); printf("\n"); print_stack(*b); printf("\n\n");
        min_to_top(a); //print_stack(*a); printf("\n"); print_stack(*b); printf("\n\n");
        pb(a,b); //print_stack(*a); printf("\n"); print_stack(*b); printf("\n\n");
        sort3(a);//print_stack(*a); printf("\n"); print_stack(*b); printf("\n\n");
        pa(a,b);//print_stack(*a); printf("\n"); print_stack(*b); printf("\n\n");
       // sort4(a);
        pa(a,b);
        // pb(a, b);
        // pb(a, b);
        // sort3(a);
        // pa(a,b);
        // sort4(a);
        // pa(a, b);
        // sort5(a);
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
