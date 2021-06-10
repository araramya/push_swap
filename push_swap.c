#include "./includes/include.h"

int main(int argc, char **argv)
{
    count = 0;
    int i;
    t_node *a = NULL;
    t_node *b = NULL;

    i = argc;
  
     while(i > 1)
     {
         push(&a, ft_atoi(argv[i - 1]));
        
         i--;
     }

    print_stack(a); printf("\n"); print_stack(b); printf("\n\n");
    choose_sort(&a, &b, argc);


    printf("\n");
    printf("THE COUNT OF ACTIONS IS :: %d\n", count);
    print_stack(a); printf("\n"); print_stack(b); printf("\n\n");

}