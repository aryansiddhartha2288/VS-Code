#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define MAX 10
  int stack [MAX];
  int top=-1;

  void push();
  void pop();
  void display();
  void search();

void main()
{
    int c;
    char ch;

    do
    {
        printf("1 for push \n");
        printf("2 for pop \n");
        printf("3 for display \n");
        printf("4 for search \n");
        printf("5 for exit \n");
        printf("enter any choice \n");
        scanf("%d",&c);

        switch(c)
        {
        case 1: push();
                break;

        case 2: pop();
                break;

        case 3: display();
                break;

        case 4: search();
                break;

        case 5: exit(c);

        default :printf("enter a valid choice ");
        }
    printf("\nDo you want to continue (Y/N)");
    fflush(stdin);
    scanf("%c",&ch);

    }while(ch== 'Y' || ch=='y');
    getch();
}

void push()
{
    if (top==MAX-1)
    {
        printf("stack overflow");
        getch();
    }
    else
    {
        top=top+1;
        printf("Enter an item ");
        scanf("%d",&stack[top]);
        printf("Sucessfully inserted ");
    }
}

void pop()
{
    if(top==-1)
    {
        printf("stack underflow ");
        getch();
    }
    else
    {
        printf("\n delete item=%d",stack[top]);
        top=top-1;
    }
}

void display()
{
    int i;
    if(top==-1)
    {
        printf("enter stack \n");
        getch();
    }
    else
    {
        i=top;
        while(i>=0)
        {
           printf("%d ",stack[i]);
           i=i-1;
        }
    }
}

void search()
{
    int i,item,flag=0;
    if(top==-1)
    {
        printf("\n stack is empty ");
        getch();
    }
    else
    {
        i=top;
        printf("enter an item for search : ");
        scanf("%d",&item);
        
        while(i>=0)
        {
            if(stack[i]==item)
            {
                flag=1;
                break;
            }
            i=i-1;
        }
    }
    if(flag==0)
    printf("item not exist ");
    else
    printf("item exist ");
}
