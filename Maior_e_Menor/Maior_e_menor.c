#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main(void)
{
    long int a, b;
    while (1)
    {
        setlocale(LC_ALL, "Portuguese");
        system("cls");
        printf("\nEntre com o primeiro n�mero para a compara��o: ");
        scanf_s("%d", &a);
        printf("\nEntre com o segundo n�mero para a compara��o: ");
        scanf_s("%d", &b);

        if (a > b)
        {
            printf("\nO numero %d � maior que o %d", a, b);
        }
        else if (a == b)
        {
            printf("\nO Numero %d � igual ao %d", a, b);
        }
        else if (a < b)
        {
            printf("\nO numero %d � menor que o %d", a, b);
        }
        printf("\nPressione a tecla Enter para fazer outra compara��o");
        fflush(stdin);
        getchar();
        fflush(stdin);
    }
    return 0;
}