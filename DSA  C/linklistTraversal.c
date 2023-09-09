#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};

void printList(struct node *n)
{
    while(n!=NULL)
    {
        printf("%d ",n->data);
        n=n->next;
    }
}

int main()
{
    struct node *head=NULL;
    struct node *second=NULL;
    struct node *third=NULL;

//allocate 3 node sin the heap
head=(struct node*)malloc(sizeof(struct node));
second=(struct node*)malloc(sizeof(struct node));
third=(struct node*)malloc(sizeof(struct node));

head->data=100;           //assign data in first node
head->next=second;      //link first node with second node
second->data=200;
second->next=third;
third->data=300;
third->next=NULL;

printList(head);

return 0;
}

