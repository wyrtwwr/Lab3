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

    puts("������� �������� ��� �������:");

    scanf("%d", &dym);

    result = A * dym;
    resultI = I * dym;
    resultC = C * dym;

    printf("%d ������ � ��� % .3f ��\n", dym, result);
    printf("%d ������ � ��� ���������� % .3f ��\n", dym, resultI);
    printf("%d ������ � ��� ��������������� % .3f ��", dym, resultC);
}
