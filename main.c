#include "includes.h"

int main()
{
    struct stack_node* node = NULL;
    push(&node,10);
    push(&node,20);
    push(&node,30);
    printf("%d popped from stack\n", pop(&node));
    printf("%d is TOP element in stack \n", peek(node));
    print_stack(node);
}