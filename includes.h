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



#endif