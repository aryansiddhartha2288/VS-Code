#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct nodetype
{
    int info;
    struct nodetype *next;
}node;

void CreateEmptyList(node **head);
void InOrderTraverse(node *head);
node *Search(node *,int);
void InsertAtBeg(node **head,int item);
void InsertAtEnd(node **head,int);
void InsertAfterElement(node *head,int item,int after);
void DeleteFromBeg(node **head);
void DeleteFromEnd(node **head);
void DeleteAfterElement(node *head,int after);

void main()
{
    node *head;
    head=(node*)malloc(sizeof(node));
    CreateEmptyList(&head);
    int choice,element,after;
    while (1)
    {
        printf("What do you want?\n");
        printf("1-Insert at the beginning\n");
        printf("2-Insert at the end\n");
        printf("3-Insert after an element\n");
        printf("4-Traverse the list\n");
        printf("5-Delete at the beginning\n");
        printf("6-Delete at the end\n");
        printf("7-Delete after the element\n");
        printf("8-Exit\n");
        printf("Enter your choice(1-8)\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("Enter element to insert\n");
            scanf("%d",&element);
            InsertAtBeg(&head,element);
            break;
        case 2:
            printf("Enter element to insert: ");
            scanf("%d",&element);
            InsertAtEnd(&head,element);
            break;
        case 3:
            printf("Enter the element to insert: ");
            scanf("%d",&element);
            printf("Enter the element after which you want to insert: ");
            scanf("%d",&after);
            InsertAfterElement(head,element,after);
            break;
        case 4:
            InOrderTraverse(head);
            printf("\n");
            break;
        case 5:
            DeleteFromBeg(&head);
            break;
        case 6:
            DeleteFromEnd(&head);
            break;
        case 7:
            printf("Enter the element after which you want to delete: ");
            scanf("%d",&after);
            DeleteAfterElement(head,after);
            break;
        case 8:
            exit(1);
        default:
            printf("Please enter a valid choice\n ");
            break;
        }
       
    }  
}
void CreateEmptyList(node **head)
{
    *head=NULL;
}
void InOrderTraverse(node *head)
{
    while(head!=NULL)
        {
            printf("%d ",head->info);
            head=head->next;
        } 
}
node *Search(node *head,int item)
{
    while((head!=NULL) && (head->info!=item))
    {
        head=head->next;
    }
    return head;
}
void InsertAtBeg(node **head,int item)
{
    node *ptr;
    ptr=(node*)malloc(sizeof(node));
    ptr->info=item;
    if(*head==NULL)
        ptr->next=NULL;
    else
        ptr->next=*head;
    *head=ptr;
}
void InsertAtEnd(node **head,int item)
{
    node *ptr,*loc;
    ptr=(node*)malloc(sizeof(node));
    ptr->info=item;
    ptr->next=NULL;
    if(*head==NULL)
        *head=ptr;
    else
    {
        loc=*head;
        while (loc->next!=NULL)
        {
            loc=loc->next;
        }
        loc->next=ptr;
    }
}
void InsertAfterElement(node *head,int item,int after)
{
    node *ptr,*loc;
    loc=Search(head,after);
    if(loc==NULL)
        return;
    ptr=(node*)malloc(sizeof(head));
    ptr->info=item;
    ptr->next=loc->next;
    loc->next=ptr;
}
void DeleteFromBeg(node **head)
{
    node *ptr;
    if(*head==NULL)
        return;
    else
    {
        ptr=*head;
        *head=(*head)->next;
        free(ptr);
    }
}
void DeleteFromEnd(node **head)
{
    node *ptr,*loc;
    if(*head==NULL)
    {
        return;
    }
    else if((*head)->next==NULL)
    {
        ptr=*head;
        *head=NULL;
        free(ptr);
    }
    else
    {
        loc=*head;
        ptr=(*head)->next;
        while (ptr->next!=NULL)
        {
            loc=ptr;
            ptr=ptr->next;
        }
        loc->next=NULL;
        free(ptr);
    }
}
void DeleteAfterElement(node *head, int after)
{
    node *ptr,*loc;
    loc=Search(head,after);
    if (loc==NULL)
    {
        return;
    }
    else
    {
        ptr=loc->next;
        loc->next=ptr->next;
        free(ptr);
    }
}