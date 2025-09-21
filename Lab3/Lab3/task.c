#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int header() {
    setlocale(LC_ALL, "RUS");

    int dym;

    float result;

    puts("введите значение дл€ расчета:");
}

int main() {
    setlocale(LC_ALL, "RUS");

    int num;
    int num2;
    puts("введите число:");

    scanf("%d", &num);

    printf("¬ведено число:\n%d\n", num);

    puts("введите второе число:");

    scanf("%d", &num2);

    printf("¬ведено второе число:\n%d\n", num2);

    printf("сумма:%d\n", num + num2);

    printf("разность:%d\n", num2 - num);

    printf("произведение:%d\n", num2 * num);

    printf("частное:%d\n", num2 / num);

    printf("остаток от делени€:%d\n", num2 % num);

    
}

