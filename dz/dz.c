#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
int main() 
{
    setlocale(LC_CTYPE, "RUS");
    int month, leap_year;
    printf("ќпределение количества дней в мес€це\n");

    printf("√од високосный? (1 - да, 0 - нет): ");
    scanf("%d", &leap_year);

    printf("¬ведите номер мес€ца (1-12): ");
    scanf("%d", &month);

    if (month == 2) {
        printf("ƒней в мес€це: %d\n", leap_year ? 29 : 28);
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        printf("ƒней в мес€це: 30\n");
    }
    else {
        printf("ƒней в мес€це: 31\n");
    }
    return 0;
}