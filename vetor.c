#include <stdio.h>

int main()
{
int i;
float v1[4] = {7.1, 8.4, 9.5, 5.2};

printf("Exibindo os valores do vetor:\n\n");

for(i = 0; i <= 3; i++)
{
    printf("v1[%d] = %.1f\n", i, v1[i]);
}

    return 0;
}