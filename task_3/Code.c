#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "RUS");

    float a, b;

    puts("¬ведите a:");
    scanf("%f", &a);
    printf("\n");

    system("pause");

    puts("\n¬ведите b:");
    scanf("%f", &b);

    puts("\n+-------------+-------------+-------------+");
    printf("| %-11s | %-11s | %-11s |\n", "a * b", "a + b", "a - b");
    puts("+-------------+-------------+-------------+");

    printf("| %-4g * %-4g | %-4g + %-4g | %-4g - %-4g |\n",
        a, b, a, b, a, b);
    puts("+-------------+-------------+-------------+");

    printf("| %-11g | %-11g | %-11g |\n",
        a * b, a + b, a - b);
    puts("+-------------+-------------+-------------+");

    return 0;
}