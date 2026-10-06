#include<stdio.h>

int main()
{
    char str[127];
    scanf("%[0-4@8. a-z]", str);
    printf("%s\n", str);
    return 0;
}