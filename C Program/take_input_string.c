// calculate length of string 

#include<stdio.h>
int main()
{
    char str[30];

    printf("Enter your name ");
   // scanf("%s",&str);                   //Not multiword string
   // gets(str);                          //Multiword string
    fgets(str,10,stdin);                 // use fgets()

    printf("%s",str);

    printf("\n");
    return 0;
}