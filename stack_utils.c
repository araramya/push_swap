#include "includes.h"

struct stack_node* new_node(int data)
{
    struct stack_node* stack_node =
    (struct stack_node*)malloc(sizeof(struct stack_node));
    stack_node->data = data;
    stack_node->next = NULL;
    return stack_node;
}

int isEmpty(struct stack_node* node)
{
    return (!node);
}

void push(struct stack_node** node, int data)
{
    struct stack_node* stack_node = new_node(data);
    stack_node->next = *node;
    *node = stack_node;
  //  printf("%d pushed to stack\n", data);
}

void push_end(struct stack_node **node, int info)
{
    struct stack_node* n_node = new_node(info);

    if(*node == NULL)
        *node = n_node;
    else 
    {
        struct stack_node *lastNode = *node;
        while(lastNode->next != NULL)
            lastNode = lastNode->next;
        lastNode ->next = n_node;
    }

}

int pop(struct stack_node** node)
{
    int popped;
    if(isEmpty(*node))
        return INT_MIN;
    struct stack_node* temp = *node;
    *node = (*node)->next;
     popped = temp->data;
    free(temp);
    return popped;
}
int peek(struct stack_node* node)
{
    if(isEmpty(node))
        return INT_MIN;
        return node->data;
}

int pop_end(struct stack_node** node)
{
    int popped;
    if(*node == NULL)
        return INT_MIN;
    if((*node)->next == NULL)
    {
        free(node);
        return INT_MIN;
    }
    //find the secon lasd node
    struct stack_node *second_last = *node;
    while(second_last->next->next != NULL)
        second_last = second_last->next;
    popped = second_last->next->data;
    free(second_last ->next);
    second_last -> next = NULL;
    return (popped);
}
int stack_size(struct stack_node* node)
{   
    int i;

    i  = 0;
    struct stack_node *ptr;
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

void print_stack(struct stack_node* node)
{
    //int i;
    struct stack_node *ptr;
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
