//how to take input from user

#include<stdio.h>
#include<conio.h>
#include<string.h>
struct date
{
    int d,m,y;
};
int main()
{
   // struct date d1,d2;
    struct date d1;
    printf("enter date ");
    scanf("%d%d%d",&d1.d,&d1.m,&d1.y);
    printf("%d/%d/%d",d1.d,d1.m,d1.y);

return 0;
}