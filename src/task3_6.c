#include<stdio.h>

int main()
{
    char chu[127];
    scanf("Full Name: %[^\n]", chu);
    printf("%s\n", chu); 

    return 0;
}