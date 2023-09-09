#include<stdio.h>
#include<string.h>
struct date
{
    int d,m,y;
};
struct date inputDate();
void showDate(struct date);
int main()
{
    struct date d1;
    d1=inputDate();
    showDate(d1);

    printf("\n");
    return 0;
}
void showDate(struct date somedate)
{
    printf("%d-%d-%d",somedate.d,somedate.m,somedate.y);
}
struct date inputDate()
{
    struct date somedate;
    printf("\nenter date ");
    scanf("%d/%d/%d/",&somedate.d,&somedate.m,&somedate.y);
    return somedate;
}