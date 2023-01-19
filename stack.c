#include <stdio.h>
#include <stdlib.h>

int stack[5], top = -1;
void push();
void pop();
void display();

void main()
{
    int choice;
    printf("What do you want\n");
    printf("1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT");
    while (1)
    {
        printf("\nEnter choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Invalid choice\n");
        }
    }
}
void push()
{
    int item;
    if (top == 5 - 1)
    {
        printf("stack is full\n");
    }
    else
    {
        printf("Enter the element in stack: ");
        scanf("%d", &item);
        top = top + 1;
        stack[top] = item;
    }
}
void pop()
{
    if (top == -1)
    {
        printf("stack is empty\n");
    }
    else
    {
        printf("popped %d", stack[top]);
        top = top - 1;
    }
}
void display()
{
    int i;
    if (top >= 0)
    {
        printf("stack element is:");
        for (i = top; i >= 0; i--)
        {
            printf("%d ", stack[i]);
        }
    }
    else
    {
        printf("stack is empty\n");
    }
}