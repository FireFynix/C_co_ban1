#include<stdio.h>

int main()
{
    char ten[50], field[217], id[10];
    int classnum;
    int date, month, year;
    char fieldcode[10], gen[5];
    float gpa;

    scanf("%[^\n]", ten);
    scanf("%s", id);
    scanf("%d-%d-%d", &date, &month, &year);
    scanf(" %[^\n]", field);
    scanf(" %s", fieldcode);
    scanf(" %d", &classnum);
    scanf("%s", gen);
    scanf("%f", &gpa);

    printf("Name: %s\n", ten);
    printf("ID: %s\n", id);
    printf("Date of birth: %02d/%02d/%04d\n", date, month, year);
    printf("Field: %s\n", field);
    printf("Class: %s-%02d - %s\n", fieldcode, classnum, gen);
    printf("GPA: %.2f\n", gpa);
    return 0;
}