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

struct stack_node* new_node(int data);
int isEmpty(struct stack_node* node);
void push(struct stack_node** node, int data);
int pop(struct stack_node** node);
int peek(struct stack_node* node);
void print_stack(struct stack_node* node);
void sa(struct stack_node *a);
int stack_size(struct stack_node* node);
void sb(struct stack_node *b);
void ss(struct stack_node *a, struct stack_node *b);
void pa(struct stack_node **a, struct stack_node **b );
void pb(struct stack_node **a, struct stack_node **b);



#endif