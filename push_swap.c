#include "./includes/include.h"

int main(int argc, char **argv)
{
    int i;
    t_node *a = NULL;
    t_node *b = NULL;

    i = 0;
    while(i < argc - 1)
    {
        push(&a, ft_atoi(argv[i+1]));
        i++;
    }

    print_stack(a); printf("\n"); print_stack(b); printf("\n\n");

    if(argc == 4)
         sort3(&a);
    else if(argc == 3)
        sort2(&a);

    print_stack(a); printf("\n"); print_stack(b); printf("\n\n");

}