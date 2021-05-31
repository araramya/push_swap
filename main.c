#include "includes.h"

int main()
{
    //struct stack_node* stack = NULL;
    struct stack_node* a = NULL;
    struct stack_node* b = NULL;
    for (int i = 5; i >= 1; i--)
    {
        push(&a, i);
    }
    for (int i= 10; i >=6; i--)
    {
        push(&b, i);
    }

    print_stack(a); printf("\n"); print_stack(b); printf("\n");

    //sa(a);
    //sb(b);

   // print_stack(a); printf("\n"); print_stack(b); printf("\n");
    
   // ss(a,b);

    // print_stack(a); printf("\n"); print_stack(b); printf("\n");
    printf("\n");

    //pa(&a,&b);    
    print_stack(a); printf("\n"); print_stack(b); printf("\n");
    printf("\n");
    pb(&a, &b);
    print_stack(a); printf("\n"); print_stack(b); printf("\n");

}