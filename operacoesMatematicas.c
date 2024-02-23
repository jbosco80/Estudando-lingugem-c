#include <stdio.h>

int main() {
    float numero1, numero2, resultado;
    int opcao, tabuada;

    while (1) {
        printf("Digite 1 para calcular, 2 para sair:\n");
        scanf("%d", &opcao);

        if (opcao == 2) {
            break; // Sai do loop se o usuário escolher 2 para sair.
        } else if (opcao == 1) {
            do{

            printf("Digite:\n");
            printf("1 - tabuada\n");
            printf("2 - somar\n");
            printf("3 - subtrair\n");
            printf("4 - multiplicar\n");
            printf("5 - dividir\n");
            printf("0 - sair\n");

            scanf("%d", &opcao);

            if (opcao == 0) {
                break; // Sai do loop interno se o usuário digitar 0 para sair da tabuada.
                }

            switch (opcao) {
                case 1:
                    do {
                        printf("Digite qual tabuada você quer ou (0) para sair:\n");
                        scanf("%d", &tabuada);

                        if (tabuada == 0) {
                           break; // Sai do loop interno se o usuário digitar 0 para sair da tabuada.
                         }

                        printf("Tabuada do %d\n", tabuada);

                        for (int j = 1; j <= 10; j++) {
                            printf("%d x %d = %d\n", tabuada, j, tabuada * j);
                        }
                    } while (tabuada != 0);
                    break;

                case 2:
                    printf("Digite 2 numeros:\n");
                    scanf("%f %f", &numero1, &numero2);
                    resultado = numero1 + numero2;
                    printf("A soma de %.1f + %.1f = %.1f\n", numero1, numero2, resultado);
                    break;

                case 3:
                    printf("Digite 2 numeros:\n");
                    scanf("%f %f", &numero1, &numero2);
                    resultado = numero1 - numero2;
                    printf("A subtração de %.1f - %.1f = %.1f\n", numero1, numero2, resultado);
                    break;

                case 4:
                    printf("Digite 2 numeros:\n");
                    scanf("%f %f", &numero1, &numero2);
                    resultado = numero1 * numero2;
                    printf("A multiplicacao de %.1f x %.1f = %.1f\n", numero1, numero2, resultado);
                    break;

                case 5:
                    printf("Digite 2 numeros:\n");
                    scanf("%f %f", &numero1, &numero2);
                    if (numero2 != 0) {
                        resultado = numero1 / numero2;
                        printf("A divisao de %.2f / %.2f = %.2f\n", numero1, numero2, resultado);
                    } else {
                        printf("Erro: Divisão por zero.\n");
                    }
                    break;

                default:
                    printf("Opção inválida.\n");
                    break;
            }
            }while(opcao != 0);
        } else {
            printf("Opção inválida. Digite 1 para calcular, 2 para sair.\n");
        }
    }

    printf("Encerrando o programa.\n");

    return 0;
}



