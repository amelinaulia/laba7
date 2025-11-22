#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
    setlocale(LC_CTYPE, "RUS");
    char c;

    printf("Введите символ: ");
    scanf("%c", &c);

    // Проверка на буквы английского алфавита
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        printf("Это буква\n");
    }
    // Проверка на цифры
    else if (c >= '0' && c <= '9') {
        printf("Это цифра\n");
    
    }
    else {
        printf("Это не буква и не цифра\n");
    }

    return 0;
}