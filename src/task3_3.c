#include<stdio.h>

int main()
{
    char str[127];
    scanf("%[^\n]", str);
    printf("%s\n", str);
    return 0;
}