// the 1
#include <stdio.h>
int main (void)
{
    int i;
    char x[51];
    char y[51];
    FILE *num1 =fopen("input.txt","r");
    FILE *num2 =fopen("out.txt","w");
    fread(x,sizeof(char),51,num1);
    for(i=0;i<51;i++)
    {
        y[i]=x[50-i];
    }
    fwrite(y,sizeof(char),51,num2);
    fclose(num1);
    fclose(num2);
    return 0;
}




