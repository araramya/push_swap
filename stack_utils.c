#include "include.h"

t_node *new_node(int info)
{
    t_node *stack_node = (t_node*)malloc(sizeof(t_node));
    stack_node -> data = info;
    stack_node -> next = NULL;
    return stack_node;
}

int is_empty(t_node *node)
{
    return (!node);
}

void push(t_node **node, int info)
{
    t_node *stack_node = new_node(info);
    stack_node -> next = *node;
    *node = stack_node;
}

void push_end(t_node **node, int info)
{
    t_node* n_node = new_node(info);
    if(*node == NULL)
        *node = n_node;
    else 
    {
        t_node *last_node = *node;
        while(last_node->next != NULL)
            last_node = last_node->next;
        last_node->next = n_node;
    }
}

int pop(t_node **node)
{
    int popped;
    if(is_empty(*node))
        return 0 ;
    t_node* temp = *node;
    *node = (*node)->next;
     popped = temp->data;
    free(temp);
    return popped;
}
int peek(t_node* node)
{
    if(is_empty(node))
        return 0;
    return node->data;
}

int pop_end(t_node** node)
{
    int popped;
    if(*node == NULL)
        return 0;
    if((*node)->next == NULL)
    {
        free(node);
        return 0;
    }
    //find the secon lasd node
    t_node *second_last = *node;
    while(second_last->next->next != NULL)
        second_last = second_last->next;
    popped = second_last->next->data;
    free(second_last ->next);
    second_last -> next = NULL;
    return (popped);
}
int stack_size(t_node* node)
{   
    int i;

    i  = 0;
    t_node *ptr;
    ptr = node;
    if(ptr == NULL)
        return (0);
    else
    {
        while(ptr != NULL)
        {
            i++;
            ptr = ptr->next;
        }
        return i;
    }
}

void print_stack(t_node *node)
{
    t_node *ptr;
    ptr = node;
    if(ptr == NULL)
        printf("stack is empty\n");
    else
    {
        while(ptr != NULL)
        {
            printf("%d:  ", ptr ->data);
            ptr = ptr ->next;
        }
    }
}
