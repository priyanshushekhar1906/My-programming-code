#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int IsFULL(struct node *top)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int IsEmpty(struct node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
struct node *push(struct node *top, int x)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));

    if (IsFULL(top))
    {
        printf("Stack is Full\n");
    }
    else
    {
        ptr->data = x;
        ptr->next = top;
        top = ptr;
        return top;
    }
}
int pop(struct node **top)
{
    if (IsEmpty(*top))
    {
        printf("Stack is Empty\n");
        return 0;
    }
    else
    {
        int x = (*top)->data;
        struct node *p = *top;
        struct node *p1 = (*top)->next;
        free(p);
        *top = p1;
        return x;
    }
}
void StackListPrint(struct node *top)
{
    printf("Stack: ");
    while (top != NULL)
    {
        printf("%d ", top->data);
        top = top->next;
    }
    printf("\n");
}

int main()
{
    struct node *top = NULL;
    top = push(top, 2);
    top = push(top, 4);
    top = push(top, 14);
    top = push(top, 234);
    printf("Elememt %d is pop From the stack\n",pop(&top));
    printf("Elememt %d is pop From the stack\n",pop(&top));
    // printf("Elememt %d is pop From the stack\n",pop(&top));
    // printf("Elememt %d is pop From the stack\n",pop(&top));
    // printf("Elememt %d is pop From the stack\n",pop(&top));
    StackListPrint(top);
    return 0;
}