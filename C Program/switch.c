#include<stdio.h>
#include<conio.h>

int main()
{
    int x,r,l,b,ar,n1,n2,n3;
    float a,avg;
    printf("\n1. Area of circle");
    printf("\n2. Area of rectangle");
    printf("\n3. Average of three numbers");
    printf("\n4. exit \n");
    printf("\nEnter your choice ");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
            printf("enter radius of circle ");
            scanf("%d",&x);
            a=3.14*x*x;
            printf("area is %f",a);
            break;
        case 2:
            printf("Enter length & breadth of rectangle ");
            scanf("%d%d",&l,&b);
            ar=l*b;
            printf("Area is %d",ar);
            break;
         case 3:
            printf("Enter three numbers ");
            scanf("%d%d%d",&n1,&n2,&n3);
            avg=(n1+n2+n3)/3;
            printf("avearge is %f",avg); 
            break;
        case 4:
            exit(0);
        default :
            printf("Invalid choice");    
    } 
   return 0;   
}    