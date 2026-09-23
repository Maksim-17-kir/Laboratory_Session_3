#include <stdio.h>
#include <locale.h>

#define _CRT_SECURE_NO_DEPRECATE

int main()
{
    setlocale(LC_CTYPE, "RUS");

    int num, num2;

    puts("Введите первое целое число:");
    scanf("%d", &num);
    printf("Введено число: %d\n\n", num);

    puts("Введите второе целое число:");
    scanf("%d", &num2);
    printf("Введено число: %d\n\n", num2);

    printf("Вы ввели числа: %d и %d\n", num, num2);
    printf("Сумма этих чисел равна %d\n", num + num2);
    printf("Разность этих чисел равна %d\n", num - num2);
    printf("Произвидение этих чисел равно %d\n", num * num2);
    printf("Частное этих чисел равно %d\n", num / num2);
    printf("Остаток от деления этих чисел равен %d\n", num % num2);

    return 0;
}