#include <stdio.h>

int main()
{   
    int i,num, sum = 0, n;
    float avg;
    
    printf("Please Enter term of n number:-");
    scanf("%d", &n);
    for( i = 1; i <= n; i++)
    {
        printf("Number %d = ", i);
        scanf("%d", &num);
        sum = sum + num;
    }

    avg = sum / n;

    printf("\nThe Sum of n Numbers     = %d", sum); 
    printf("\nThe Average of n Numbers = %.2f\n", avg);
}

