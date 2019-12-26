#include <stdio.h>
 
int main()
{
    int i, j;
    printf("Enter an integer: ");
    scanf("%d", &i);
    printf("Times %d Table\n", i);
    for(j = 0; j <= 12; j = j + 1)
    {
         printf("%d x %d = %d\n", j, i, j*i);
    }
    printf("\n");
}


