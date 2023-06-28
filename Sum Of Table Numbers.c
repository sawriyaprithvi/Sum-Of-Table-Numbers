#include <stdio.h>

int main(){

    int tableof;
    printf("Enter the table :\n");
    scanf("%d", &tableof);

    int limit, sum = 0;
    printf("Enter the limit\n");
    scanf("%d", &limit);

    for (int i = 1; i <= limit; i++)
    {
        int number = tableof * i;
        sum += number;
    }

    printf("The sum of numbers occurring in the table of %d upto %d is %d\n", tableof, limit, sum);

    return 0;
}