#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "RUS");

    int kolvo;         // ���������� ������
    float price, total;   // ���� �� ������� � ����� ���������

    printf("������� ���������� ������: ");
    scanf("%d", &kolvo);

    printf("������� ���� �� ������� ������: ");
    scanf("%f", &price);

    total = kolvo * price;

    printf("����� ��������� �������: %.2f\n", total);

}
