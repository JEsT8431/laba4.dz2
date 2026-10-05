#include <stdio.h>
#include <locale.h>
#define _CRT_SECURE_NO_WARNINGS

void main() {
    setlocale(LC_ALL, "RUS");
    int A, B, C, result;

    puts("¬ведите массу первого ингредиента (A): ");
    scanf("%d", &A);
    puts("¬ведите массу второго ингредиента (B): ");
    scanf("%d", &B);
    puts("¬ведите массу третьего ингредиента (C): ");
    scanf("%d", &C);

    result = ((A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0));

    printf("–езультат эксперимента (1 Ч реакци€ пошла, 0 Ч реакции нет): %d", result);
}