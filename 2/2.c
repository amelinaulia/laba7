#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
    setlocale(LC_CTYPE, "RUS");
    float x, y, result;
    char c;

    printf("=====================================\n");
    printf("           КАЛЬКУЛЯТОР\n");
    printf("=====================================\n");
    printf("Доступные операции:\n");
    printf("+  сложение\n");
    printf("-  вычитание\n");
    printf("*  умножение\n");
    printf("/  деление\n");
    printf("=====================================\n");
    printf("Введите выражение (например: 5+3): ");

    scanf("%f%c%f", &x, &c, &y);

    printf("Результат: %.2f %c %.2f ", x, c, y);

    switch (c)
    {
    case '+':
        result = x + y;
        printf("= %.2f\n", result);
        break;

    case '-':
        result = x - y;
        printf("= %.2f\n", result);
        break;

    case '*':
        result = x * y;
        printf("= %.2f\n", result);
        break;

    case '/':
        if (y != 0) {
            result = x / y;
            printf("= %.2f\n", result);
        }
        else {
            printf("= Ошибка: деление на ноль!\n");
        }
        break;

    default:
        printf("= Ошибка: неизвестная операция!\n");
    }

    printf("=====================================\n");

    return 0;
}