#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float v1;
    float v2;
    float r;
    char op;
    char resposta;

    setlocale(LC_ALL, "Portuguese");

    do {
        printf("Digite o primeiro valor: ");
        scanf("%f", &v1);
        printf("Digite o segundo valor: ");
        scanf("%f", &v2);
        printf("Digite a operação matemática desejada(a = adição, s = subtração, m = multiplicação, d = divisão): ");
        scanf(" %c", &op);
        switch (op) {
            case 'a':
                r = v1 + v2;
                printf("Resultado: %.2f\n", r);
                break;
            case 's':
                r = v1 - v2;
                printf("Resultado: %.2f\n", r);
                break;
            case 'm':
                r = v1 * v2;
                printf("Resultado: %.2f\n", r);
                break;
            case 'd':
                if (v2 != 0) {
                    r = v1 / v2;
                    printf("Resultado: %.2f\n", r);
                } else {
                    printf("Erro: divisão por zero!\n");
                }
                break;
            default:
                printf("Operação não disponível, digite novamente.\n");
                continue;
        }
        printf("Deseja utilizar novamente a calculadora? (s/n): ");
        scanf(" %c", &resposta);
    } while (resposta != 'n' && resposta != 'N');

    return 0;
}
