#include<stdio.h>

int main()
{
    printf("========================================\n");
    printf("%25s\n", "FILE REPORT");
    printf("========================================\n");
    printf("%-20s%X\n", "FIle address:", 4152963);
    printf("%-20s%s\n", "Path:", "C:\\User\\Administrator\\Downloads\\file.txt");
    printf("%-20s%s\n", "Content:", "\"Hello World!\"");
    printf("%-20s%s\n", "Author:", "Tran Quang Huy");
    printf("%-20s%s\n", "Size:", "4KB");
    printf("\n");
    printf("Metadata\n");
    printf("%-20s%s\n", "Date created:", "19/03/2024");
    printf("%-20s%s\n", "Date modified:", "20/03/2024");
    return 0;
}