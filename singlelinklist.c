#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
void traversing();
void insertionatst();
void insertionatpo();
void insertionatend();
void deletionatst();
void deletionatpo();
void deletionatend();
void searching();
void main()
{
    int choice;
    while (1)
    {
        printf("\n1.Display list\n");
        printf("2.Insertion at start\n");
        printf("3.Insert at any position\n");
        printf("4.Insert at the end\n");
        printf("5.Deletion at start\n");
        printf("6.Deletion at any position\n");
        printf("7.Deletion at end\n");
        printf("8.Searching\n");
        printf("9.Exit\n");
        printf("\nWhat do you want:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            traversing();
            break;
        case 2:
            insertionatst();
            break;
        case 3:
            insertionatpo();
            break;
        case 4:
            insertionatend();
            break;
        case 5:
            deletionatst();
            break;
        case 6:
            deletionatpo();
            break;
        case 7:
            deletionatend();
            break;
        case 8:
            searching();
            break;
        case 9:
            exit(0);
            break;
        default:
            printf("you entered wrong choice\n");
        }
    }
}
void traversing()
{
    struct node *temp;
    if (head == NULL)
        printf("List is empty\n");
    else
    {
        temp = head;
        while (temp != NULL)
        {
            printf("data:%d\n", temp->data);
            temp = temp->next;
        }
    }
}
void insertionatst()
{
    int data;
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter number you want to insert:");
    scanf("%d", &newnode->data);
    newnode->next = head;
    head = newnode;
}

void insertionatpo()
{
    struct node *temp, *newnode;
    int pos, data, i = 1;
    newnode = malloc(sizeof(struct node));
    printf("Enter position where you want to insert:");
    scanf("%d", &pos);
    printf("Enter data what you want to insert:");
    scanf("%d", &newnode->data);
    temp = head;
    newnode->next = NULL;
    while (i < pos - 1)
    {
        temp = temp->next;
        i++;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}
void insertionatend()
{
    int data;
    struct node *temp, *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter number what you want to insert at end:");
    scanf("%d", &newnode->data);
    temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->next = NULL;
}
void deletionatst()
{
    struct node *temp;
    if (head == NULL)
        printf("List is empty");
    else
    {
        temp = head;
        head = head->next;
        free(temp);
    }
}
void deletionatpo()
{
    struct node *temp, *nextnode;
    int pos, i = 1;
    printf("Enter position where you want to delete:");
    scanf("%d", &pos);
    temp = head;
    while (i < pos - 1)
    {
        temp = temp->next;
        i++;
    }
    nextnode = temp->next;
    temp->next = nextnode->next;
    free(nextnode);
}
void deletionatend()
{
    struct node *temp, *prevnode;
    if (head == NULL)
        printf("List is empty\n");
    else
    {
        temp = head;
        while (temp->next != NULL)
        {
            prevnode = temp;
            temp = temp->next;
        }
        free(temp);
        prevnode->next = NULL;
    }
}
void searching()
{
    struct node *temp;
    int n;
    temp = head;
    printf("What do you want to search:");
    scanf("%d", &n);
    while (temp != NULL)
    {
        if (temp->data == n)
        {
            printf("Search is successful\n");
            break;
            temp = temp->next;
        }
        else
        {
            printf("Search is unsuccessful\n");
            break;
        }
    }
}