#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int header() {
    setlocale(LC_ALL, "RUS");

    int dym;

    float result;

    puts("введите число:");
}

int main() {
    setlocale(LC_ALL, "RUS");

    int num;
    int num2;
    puts("введите число 1:");

    scanf("%d", &num);

    printf("введенное значение:\n%d\n", num);

    puts("введите число 2:");

    scanf("%d", &num2);

    printf("введенное значение:\n%d\n", num2);

    printf("сумма:%d\n", num + num2);

    printf("разность:%d\n", num2 - num);

    printf("произведение:%d\n", num2 * num);

    printf("разность:%d\n", num2 / num);

    printf("статок от деления:%d\n", num2 % num);

    
}

