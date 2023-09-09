#include<stdio.h>
int main()
{
    char str[10]={'B','H','O','P','A','L'};
    int i;
    for(i=0;i<=5;i++)                           //change this line 
       printf("%c",str[i]);

    printf("\n");
    return 0;
}

/*
#include<stdio.h>
int main()
{
    char str[10]={'B','H','O','P','A','L'};
    int i;
    for(i=0;str[i];i++)
       printf("%c",str[i]);                        //Change this line 

    printf("\n");
    return 0;
}

*/

/*
#include<stdio.h>
int main()
{
    char str[10]={'B','H','O','P','A','L'};
    printf("%s",str);
    
    printf("\n");
    return 0;
}
*/