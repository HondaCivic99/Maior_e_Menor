#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <locale.h>
int main() {
    int num1, num2;

    while (1) {
        setlocale(LC_ALL, "Portuguese");
        printf("\nDigite o primeiro número: ");
        scanf_s("%d", &num1);
        printf("\nDigite o segundo número: ");
        scanf_s("%d", &num2);

        if (num1 > num2) {
            printf("O primeiro número é maior.\n");
        }
        else if (num2 > num1) {
            printf("O segundo número é maior.\n");
        }
        else {
            printf("Os números são iguais.\n");
        }

        fflush(stdin); 

        getchar();
        printf("\n");
    }

    return 0;
}
