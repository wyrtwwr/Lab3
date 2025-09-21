#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "RUS");

    int kolvo;         // количество товара
    float price, total;   // цена за единицу и обща€ стоимость

    printf("¬ведите количество товара: ");
    scanf("%d", &kolvo);

    printf("¬ведите цену за единицу товара: ");
    scanf("%f", &price);

    total = kolvo * price;

    printf("ќбща€ стоимость покупки: %.2f\n", total);

}
