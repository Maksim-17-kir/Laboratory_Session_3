#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>
#include <locale.h>

#define D 2.54
#define P 2.32166

int main()
{
    int dym;
    float result, result1;

    setlocale(LC_CTYPE, "RUS");

    puts("¬ведите значение дл€ расчЄта:");
    scanf("%d", &dym);
    printf("\n");

    result = D * dym;
    result1 = P * dym;

    system("pause");

    printf("\n%d английских дюймов Ц это %.1f см ", dym, result);
    printf("\n%d испанских дюймов Ц это %.1f см ", dym, result1);

    return 0;
}