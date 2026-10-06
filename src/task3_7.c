#include<stdio.h>

int main()
{
    char ten[31];
    char id[10];
    char class[10];
    char gen[5];
    float gpa;
    scanf("%[^,],%[^,],%[^,],%[^,],%f", ten, id, class, gen, &gpa);
    printf("%s\n", ten);
    printf("%s\n", id);
    printf("%s\n", class);
    printf("%s\n", gen);
    printf("%.2f\n", gpa); 
    return 0;
}