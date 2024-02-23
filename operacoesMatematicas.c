#include <stdio.h>

int main() {
    // Variáveis para armazenar números, resultado, opção do menu e tabuada.
    float numero1, numero2, resultado;
    int opcao, tabuada;

    // Loop principal do programa.
    while (1) {
        // Exibe opções do menu e solicita a escolha do usuário.
        printf("Digite 1 para calcular, 2 para sair:\n");
        scanf("%d", &opcao);

        // Verifica se o usuário escolheu sair (opção 2).
        if (opcao == 2) {
            break; // Sai do loop principal se o usuário escolher 2 para sair.
        } else if (opcao == 1) {
            // Loop interno para o menu de cálculos.
            do {
                // Exibe opções do menu de cálculos e solicita a escolha do usuário.
                printf("Digite:\n");
                printf("1 - tabuada\n");
                printf("2 - somar\n");
                printf("3 - subtrair\n");
                printf("4 - multiplicar\n");
                printf("5 - dividir\n");
                printf("0 - sair\n");

                scanf("%d", &opcao);

                // Verifica se o usuário escolheu sair do menu (opção 0).
                if (opcao == 0) {
                    break; // Sai do loop interno se o usuário digitar 0 para sair do menu.
                }

                // Switch para lidar com a escolha do usuário no menu de cálculos.
                switch (opcao) {
                    case 1:
                        // Loop interno para a tabuada.
                        do {
                            // Solicita ao usuário a tabuada desejada.
                            printf("Digite qual tabuada você quer ou (0) para sair:\n");
                            scanf("%d", &tabuada);

                            // Verifica se o usuário escolheu sair da tabuada (opção 0).
                            if (tabuada == 0) {
                                break; // Sai do loop interno se o usuário digitar 0 para sair da tabuada.
                            }

                            // Exibe a tabuada escolhida pelo usuário.
                            printf("Tabuada do %d\n", tabuada);

                            // Loop para calcular e exibir a tabuada.
                            for (int j = 1; j <= 10; j++) {
                                printf("%d x %d = %d\n", tabuada, j, tabuada * j);
                            }
                        } while (tabuada != 0);
                        break;

                    case 2:
                        // Cálculo da soma.
                        printf("Digite 2 numeros:\n");
                        scanf("%f %f", &numero1, &numero2);
                        resultado = numero1 + numero2;
                        printf("A soma de %.1f + %.1f = %.1f\n", numero1, numero2, resultado);
                        break;

                    case 3:
                        // Cálculo da subtração.
                        printf("Digite 2 numeros:\n");
                        scanf("%f %f", &numero1, &numero2);
                        resultado = numero1 - numero2;
                        printf("A subtração de %.1f - %.1f = %.1f\n", numero1, numero2, resultado);
                        break;

                    case 4:
                        // Cálculo da multiplicação.
                        printf("Digite 2 numeros:\n");
                        scanf("%f %f", &numero1, &numero2);
                        resultado = numero1 * numero2;
                        printf("A multiplicacao de %.1f x %.1f = %.1f\n", numero1, numero2, resultado);
                        break;

                    case 5:
                        // Cálculo da divisão.
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
                        // Mensagem de opção inválida.
                        printf("Opção inválida.\n");
                        break;
                }
            } while (opcao != 0);//Loop para permanecer no calculo
        } else {
            // Mensagem de opção inválida.
            printf("Opção inválida. Digite 1 para calcular, 2 para sair.\n");
        }
    }

    // Mensagem de encerramento do programa.
    printf("Encerrando o programa.\n");

    return 0;
}


