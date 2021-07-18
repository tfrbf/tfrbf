#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float height,BMI=0;
    int weight;
    scanf("%d%f",&weight,&height);

    BMI=(float)(weight)/(pow(height,2));

    if (BMI<18.5)
    {
        printf("%.2f",BMI);
        printf("\nUnderweight");
    }
    
    else if (BMI>=18.5&BMI<25)
    {
        printf("%.2f",BMI);
        printf("\nNormal");
    }

    else if (BMI>=25&BMI<30)
    {
        printf("%.2f",BMI);
        printf("\nOverweight");
    }

    else if (BMI>=30)
    {
        printf("%.2f",BMI);
        printf("\nObese");
    }

    return 0;
}