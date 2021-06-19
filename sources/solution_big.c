#include "../includes/include.h"

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
 
   
    int L[n1], R[n2];
 
    
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
 
   
    i = 0; 
    j = 0; 
    k = l; 
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
   
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
 
   
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
 

void sortmerge(int arr[], int l, int r)
{
    if (l < r) {
       
        int m = l + (r - l) / 2;  
        sortmerge(arr, l, m);
        sortmerge(arr, m + 1, r);
 
        merge(arr, l, m, r);
    }
}
void printArray(int A[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}

void big_sorting(t_node **a, t_node **b, int n)
{
    int temp_arr[n];
    t_node *ptr;
    int i;
    int point;
    int len;
    int index;
    

    i = 0;
    len = 0;
    ptr = *a;
    index = 0;
    while(ptr != NULL)
    {
        temp_arr[i] = ptr->data;
        ptr = ptr->next;
        i++;
    }
    sortmerge(temp_arr, 0, n-1);
    point = temp_arr[n/3];
    i = 0;
    while (i < n)
    {
        //print_stack(*a); printf("\n"); print_stack(*b); printf("\n\n");
        if((*a)->data > point && getelem(*a, stack_size(*a) - 1) < point)
        {
            rra(a);
          //  print_stack(*a); printf("\n"); print_stack(*b); printf("\n\n");
        }
        else if ((*a)->data < point)
        {
            pb(a,b);
            //print_stack(*a); printf("\n"); print_stack(*b); printf("\n\n");
            if(stack_size(*b) >= 2)
            { 
                if((*b)->data < (*b)->next->data)
                {       
                    sb(*b);
              //      print_stack(*a); printf("\n"); print_stack(*b); printf("\n\n");
                }
            }
            len++;
            //printf(" len = %d\n",len);
        }
        else if(stack_size(*b) > 1 && (*b)->data < (*b)->next->data)
        {
            rr(a,b);
           // print_stack(*a); printf("\n"); print_stack(*b); printf("\n\n");
        }
        else 
        {
            ra(a);
            //print_stack(*a); printf("\n"); print_stack(*b); printf("\n\n");
        }
        
        i++;
        //printf("i = %d\n n = %d\n", i, n);
    }
    if(stack_size(*a) == 5)
        sort5(a,b);
    //if(stack_size(*a) == 3)
      //  sort3(a);
    if(stack_size(*a) > 5)
        big_sorting(a, b, (n - len));
    while(stack_size(*b))
    {
        i = 0;
        point = (*b)->data;
        while(++i < stack_size(*b))
        {
            if(getelem(*b, i) > point)
            {
                point = getelem(*b, i);
                index  = i;
            }
        }
        if(index <= stack_size(*b)/2)
        {
            index++;
            while(--index)
            {
                rb(b);
            }
        }
        else
            {
                while(index++ < stack_size(*b))
                {
                    rrb(b);
                }
            }
        pa(a,b);
    }

}