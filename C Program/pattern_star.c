#include<stdio.h>
#include<conio.h>

int main()
{
  int i,j,lines;
  printf("Enter number of lines ");
  scanf("%d",&lines);
  
  for(i=1;i<=6;i++)
  {
    for(j=1;j<=lines;j++)    //lines=number
    {
      if (j<=lines+1-i)      //lines=number
        printf("*");
      else
        printf(" ");
    }
    printf("\n");
}
return 0;
}