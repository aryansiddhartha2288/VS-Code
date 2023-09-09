#include<stdio.h>
#include<conio.h>

int main()
{
  int i,j,lines,k;
  printf("Enter number of lines ");
  scanf("%d",&lines);

  for(i=1;i<=6;i++)
  {
    k=1;
    for(j=1;j<=lines;j++)    //lines=number
    {
      if (j<=lines+1-i)      //lines=number
        printf("%d",k++);
      else
        printf(" ");
    }
    printf("\n");
}
return 0;
}