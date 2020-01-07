#include<stdio.h>
int main()
{
    double a=0;
    double b=0;
    double c=0;
    printf("please input two numbers\n");
    scanf("%lf",&a);
    scanf("%lf",&b);
    c=(a+b)*(a+b);
    printf("%f\n",c);
}