// how to return a structure variable data from a function
//     (Function returning structure) 

#include<stdio.h>
#include<conio.h>
#include<string.h>
struct date
{
    int d,m,y;
};
struct date inputdate();
int main()
{
    struct date d1;
    d1=inputdate();
    printf("%d-%d-%d",d1.d,d1.m,d1.y);

    printf("\n");

return 0;
}
struct date inputdate()
{
    struct date somedate;
    printf("\nenter your date ");
    scanf("%d/%d/%d/",&somedate.d,&somedate.m,&somedate.y);
    return somedate;
}