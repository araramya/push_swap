#ifndef INCLUDES_H
#define INCLUDES_H

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

 struct stack_node
{
    int data;
    struct stack_node* next;
};
//stack main functions
struct stack_node* new_node(int data);
int isEmpty(struct stack_node* node);
void push(struct stack_node** node, int data);
int pop(struct stack_node** node);
int peek(struct stack_node* node);
void print_stack(struct stack_node* node);
int stack_size(struct stack_node* node);
void push_end(struct stack_node **node, int info);
int pop_end(struct stack_node** node);


//subject actons
void sa(struct stack_node *a);//actions1
void sb(struct stack_node *b);
void ss(struct stack_node *a, struct stack_node *b);//actions2
void pa(struct stack_node **a, struct stack_node **b );
void pb(struct stack_node **a, struct stack_node **b);
void ra(struct stack_node **a);//actions 3
void rb(struct stack_node **b);
void rr(struct stack_node **a, struct stack_node **b);
void rra(struct stack_node **a);//action 4
void rrb(struct stack_node **b);
void rrr(struct stack_node **a, struct stack_node **b);

#endif