#ifndef INCLUDES_H
#define INCLUDES_H

#include <stdlib.h>
#include <stdio.h>
# include "../libft/libft.h"

typedef struct s_node
{
    int data;
    struct s_node *next;
}   t_node;

//stack basic functions
t_node *new_node(int data);
int is_empty(t_node* stack);
void push(t_node **stack, int data);
void push_end(t_node **stack, int data);
int pop(t_node **stack);
int pop_end(t_node **stack);
int stack_size(t_node *stack);
void print_stack(t_node *node);


// actions
void sa(t_node *a);//actions1
void sb(t_node *b);
void ss(t_node  *a, t_node *b);//actions2
void pa(t_node **a, t_node **b );
void pb(t_node **a, t_node **b);
void ra(t_node **a);//actions 3
void rb(t_node **b);
void rr(t_node **a, t_node **b);
void rra(t_node **a);//action 4
void rrb(t_node **b);
void rrr(t_node **a, t_node **b);

//solution
void sort3(t_node **a);
void sort2(t_node **a);

#endif
