#include "./includes/include.h"

int checking(char **argv, int n)
{
    int i;
    int j;

    i = 1;
    while(i < n)
    {
        j = 0;
        while(argv[i][j])
        {
             if(argv[i][j] == '-' && ((argv[i][j+1] >= '0' && argv[i][j+1] <= '9')))
             {
                 j++;
                 continue;
             }
             else if(!(argv[i][j] >= '0' && argv[i][j] <= '9') )
            {
                return (1);
            }
            j++;
        }
        if(!(ft_atoi(argv[i]) >= -2147483648 && ft_atoi(argv[i]) <= 2147483647))
        {
            return (1);
        }
        i++;
    }   
    return (0);
}

int main(int argc, char **argv)
{
    count = 0;
    int i;
    t_node *a = NULL;
    t_node *b = NULL;
    if(argc == 1)
        return (0);
    if(checking(argv, argc))
    {
        write(1,"Error\n", 6);
        return (0);
    }
    i = argc;
  
     while(i > 1)
     {
         push(&a, ft_atoi(argv[i - 1]));
         i--;
     }
    if(check_duplicates(a))
    {
        write(1,"Error\n", 6);
        return (0);
    }
    if(!stack_check(a))
        choose_sort(&a, &b, argc);
 //   printf("%d\n", count);
 //print_stack(a);
    return (0);

}