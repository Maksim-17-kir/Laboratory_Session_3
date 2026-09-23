#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>
#include <locale.h>

#define F 2.20462
#define Y 35.274

int main()
{
    int dym;
    float result, result1;

    setlocale(LC_CTYPE, "RUS");

    puts("¬ведите значение дл€ расчЄта:");
    scanf("%d", &dym);
    printf("\n");

    result = F * dym;
    result1 = Y * dym;

    system("pause");

    printf("\n%d килограмм(а) Ц это %.1f фунтов(а) ", dym, result);
    printf("\n%d килограмм(а) Ц это %.1f унций ", dym, result1);

    return 0;
}