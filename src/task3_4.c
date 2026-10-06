#include<stdio.h>

int main()
{
    char str[127];
    scanf("%[^0-9]", str);
    printf("%s\n", str);
    return 0;
}