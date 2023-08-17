#include <stdio.h>

int main()
{
    int start = 1, end = 10,i,j;
    printf("enter the start range");
    scanf("%d",&start);
    printf ("enter the end range");
    scanf("%d",&end);

    printf("Multiplication table from %d to %d\n", start,end);
    for (i = start; i <= 10; i++)
    {
        for (j=1;j<=10;j++)
        {

            printf("%d x %d = %d\n", i, j, i * j);
        }

        printf("\n");
    }


    return 0;
}
