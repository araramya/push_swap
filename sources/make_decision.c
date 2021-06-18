#include "../includes/include.h"

void choose_sort(t_node **a, t_node **b, int argc)
{
    if(argc == 3)
        sort2(a);
    else if(argc == 4)
         sort3(a);
    else if(argc == 5)
        sort4(a,b);     
    else if(argc == 6)
        sort5(a,b);
   else if (argc >= 7 && argc <= 501)
         big_sorting(a, b, argc-1);
         
}