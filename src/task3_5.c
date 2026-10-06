#include<stdio.h>

int main()
{
    int nam;
    scanf("%4d", &nam);
    printf("%d\n", nam);
    printf("%d\n", (nam*2) + (nam%100));
    return 0;

}