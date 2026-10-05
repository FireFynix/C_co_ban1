#include<stdio.h>

int main()
{
    double so;
    int a;
    scanf("%lf %d", &so, &a);
    printf("%.*lf\n", a, so);

    return 0;
}