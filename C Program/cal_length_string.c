// calculate length of string 

#include<stdio.h>
int main()
{
    char str[10]={'B','H','O','P','A','L'};
    int i;
    for(i=0;str[i];i++);                        
       printf("Length is %d",i);

    printf("\n");
    return 0;
}