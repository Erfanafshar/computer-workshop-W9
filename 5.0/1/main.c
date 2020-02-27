//the 5 
#include <stdio.h>
int main (void)
{
    char c;
    FILE *num1 =fopen("input.txt","r");
    if (num1==NULL)
    {
        printf(":/");
        return -1 ;
    }
    FILE *num2 =fopen("out.txt","a");
    if (num2==NULL)
    {
        printf(":/");
        return -1 ;
    }
    while(1)
    {
        c=fgetc (num1);
        if(feof(num1))
        {
            break ;
        }
        else ;
        fputc(c,num2);
    }
    fclose(num1);
    fclose(num2);
    return 0;
}
