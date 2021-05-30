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
    printf("%d pushed to stack\n", data);
}

int pop(struct stack_node** node)
{
    if(isEmpty(*node))
        return INT_MIN;
    struct stack_node* temp = *node;
    *node = (*node)->next;
    int popped = temp->data;
    free(temp);
    return popped;
}
int peek(struct stack_node* node)
{
    if(isEmpty(node))
        return INT_MIN;
        return node->data;
}

void print_stack(struct stack_node* node)
{
    int i;
    struct stack_node*ptr;
    ptr = node;
    if(ptr == NULL)
        printf("stack is empty\n");
    else
    {
        while(ptr != NULL)
        {
            printf("%d\n", ptr ->data);
            ptr = ptr ->next;
        }
    }

}
