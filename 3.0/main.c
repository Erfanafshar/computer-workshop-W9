//the 3
#include <stdio.h>
int main (void)
{
    int i=0;
    char x[1000]={0};
    FILE *num1 =fopen("input.txt","r");
    if (num1==NULL)
    {
        printf(":/");
        return -1 ;
    }
    FILE *num2 =fopen("out.txt","w");
    if (num2==NULL)
    {
        printf(":/");
        return -1 ;
    }
    while (1)
    {
        x[i]=fgetc(num1);
        i++;
        if(feof(num1))
        {
            break ;
        }
        else ;
    }
    i=i-2;
    for(i;i>=0;i--)
    {
        fputc(x[i],num2);
    }
    fclose(num1);
    fclose(num2);
    return 0;
}
