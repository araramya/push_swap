#include "include.h"

int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;
    
    // //struct stack_node* stack = NULL;
     t_node *a = NULL;
     t_node *b = NULL;
     for (int i = 5; i >= 1; i--)
     {
         push(&a, i);
     }
     for (int i= 10; i >=6; i--)
     {
         push(&b, i);
     }

     print_stack(a); printf("\n"); print_stack(b); printf("\n");

    //  sa(a);
    // sb(b);  
    //ss(a,b);
    //pa(&a,&b);
    //pb(&a,&b);
    //ra(&a); 
    //rb(&b);   
   // rr(&a, &b);
   // rra(&a);
     //rrb(&b);
    //rrr(&a, &b);
    print_stack(a); printf("\n"); print_stack(b); printf("\n");
    


}