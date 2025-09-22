#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

#define      A       2.54
#define      I       2.32166
#define      C       2.7076

int main() {

    setlocale(LC_ALL, "RUS");

    int dym;

    float result;
    float resultI;
    float resultC;

    puts("введите значение для расчета:");

    scanf("%d", &dym);

    result = A * dym;
    resultI = I * dym;
    resultC = C * dym;

    printf("%d дюймов – это англ %.3f см\n", dym, result);
    printf("%d дюймов – это испнского %.3f см\n", dym, resultI);
    printf("%d дюймов – это старолитовского %.3f см", dym, resultC);
}
