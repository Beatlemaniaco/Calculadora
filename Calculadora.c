#include <stdio.h>

int main(){
    int numero1, numero2, resultado;
    int menu, operacao;
    char voltarmenu;

    do{
        printf("*** Calculadora ***\n");
        printf("1. Iniciar a Calculadora.\n");
        printf("2. Como Usar a Calculadora.\n");
        printf("3. Sair da Calculadora.\n");
        scanf("%d", &menu);

        switch (menu)
        {
            case 1:
                printf("Escolha a Operação Que Você Vai Executar.\n");
                printf("1. Soma.\n");
                printf("2. Subtração.\n");
                printf("3. Multiplcação.\n");
                printf("4. Divisão.\n");
                scanf("%d", &operacao);

                switch (operacao)
                {
                case 1:
                    printf("Digite o Primeiro Número: \n");
                    scanf("%d", &numero1);

                    printf("Digite o Segundo Número: \n");
                    scanf("%d", &numero2);

                    resultado = numero1 + numero2;

                    printf("%d + %d = %d\n", numero1, numero2, resultado);
                    break;
                case 2:
                    printf("Digite o Primeiro Número: \n");
                    scanf("%d", &numero1);

                    printf("Digite o Segundo Número: \n");
                    scanf("%d", &numero2);

                    resultado = numero1 - numero2;

                    printf("%d - %d = %d\n", numero1, numero2, resultado);
                    break;
                case 3:
                    printf("Digite o Primeiro Número: \n");
                    scanf("%d", &numero1);

                    printf("Digite o Segundo Número: \n");
                    scanf("%d", &numero2);

                    resultado = numero1 * numero2;

                    printf("%d * %d = %d\n", numero1, numero2, resultado);
                    break;
                case 4:
                    printf("Digite o Primeiro Número: \n");
                    scanf("%d", &numero1);

                    printf("Digite o Segundo Número: \n");
                    scanf("%d", &numero2);

                    if (numero2 == 0)
                    {
                        printf("Não é Permitido Usar Zero na Divisão.\n");
                    } else
                    {
                        resultado = numero1 / numero2;
                        printf("%d / %d = %d\n", numero1, numero2, resultado);
                    }
                    break;
                default:
                    printf("Opção Invalida\n");
                    continue;
                    break;
                }
                break;
            case 2:
                printf("*** Como Usar ***\n");
                printf("1. Escolha a Operação Que Deseja Realizar.\n");
                printf("2. Digite Dois Números Inteiros.\n");
                printf("3. O Resultado Aparecera Apos as Condições Anteriores Serem Cumpridas.\n");
                break;
            case 3:
                printf("Saindo....\n");
                voltarmenu = 'n';
                break;
            default:
                printf("Opção Invalida\n");
                continue;
            }
            
            if (menu != 3)
            {
                printf("Deseja Voltar ao Menu Principal(S/N): \n");
                scanf(" %c", &voltarmenu);
            }

    } while (voltarmenu == 's' || voltarmenu == 'S');

    printf("Programa Finalizado.\n");
}