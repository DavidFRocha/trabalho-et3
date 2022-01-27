#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
float calcJuros(float mont, float valor)
{
      float juros = mont - valor;

      return juros;
}

float calcTotal(float valor, int tempo, float taxa)
{
      float mont = valor *
      pow((1 + (taxa / 100)), tempo);
      return mont;
}

int main()
{

    setlocale(LC_ALL,"Portuguese");

    float taxa, total, valor, juros;
    int opcao,cad,i,op2,op3,tempo;

    struct cadastro
    {
        char nome[100],cpf[100],datadenasc[100];
    }
    c[600];
    c[600];

    system("color 02");
    system("cls");

    do
    {

        printf("\n\n ==================================================== \n\n");
        printf("\t Sistema de Empréstimo \n");
        printf("\n ==================================================== \n\n");
        system("pause");

        system("cls");
        printf("\n \t ====================================================\n\n");
        printf("\t \t Selecione a ação desejada \n\n");
        printf("\n \t ====================================================\n\n");
        printf("\t\t |1-Cadastro de clientes              |\n");
        printf("\t\t |2-Calculadora de juros compostos    |\n");
        printf("\t\t |3-Editar dados armazenados          |\n ");
        printf("\t\t |4-Visualizar informações armazenadas|\n");
        printf("\t\t |5-Remover dados armazenados         |\n");
        printf("\t\t |6-Sair do programa                  |");
        printf("\n \t ==================================================== ");
        printf("\t\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
            case 1:
                system("cls");
                printf("\t\t \n =====================================");
                printf("\t\t \n Quantos clientes voce irá cadastrar ? \n");
                printf("\t\t \n ===================================== \n");
                printf("\t\t");
                scanf("%d",&cad);

                for(i=1;i<=cad;i++)
                {
                    system("cls");
                    fflush(stdin);
                    printf("\t \n -------------------------");
                    printf("\t\t\t \n Nome do cliente");
                    printf("\t \n ------------------------- \n");
                    printf("\t");
                    scanf("%s",c[i].nome);
                    fflush(stdin);
                    printf("\t \n --------------------------");
                    printf("\t\t\t \n CPF");
                    printf("\t \n -------------------------- \n");
                    printf("\t");
                    scanf("%s",c[i].cpf);
                    fflush(stdin);
                    printf("\t \n --------------------------------------");
                    printf("\t\t\t \n Data de nascimento do cliente");
                    printf("\t \n --------------------------------------\n");
                    printf("\t");
                    scanf("%s",c[i].datadenasc);
                    fflush(stdin);
                }

                printf("O cadastro foi concluido, para continuar com o emprestimo selecione a opcao 2 no menu principal.");
                system("pause");

                break;
            case 2:
                system("cls");

                    for(i=1;i<=cad;i++)
                    {
                        printf("\n\n \t Calculadora de juros");
                        printf("\n\n\n \t Digite o valor do emprestimo: \n\n", 130);
                        scanf("%f", &valor);
                        printf("\n\n \t Digite a quantidade de meses: \n\n");
                        scanf("%d", &tempo);
                        printf("\n\n \t Digite a taxa de juros: \n\n");
                        scanf("%f", &taxa);

                        total = calcTotal(valor, tempo, taxa);
                        juros = calcJuros(total, valor);

                        printf("\n\n \t Valor total: %.2f.", total);
                        printf("\n\n \t Valor das parcelas: %.2f.", total / tempo);
                        printf("\n\n \t Juros cobrados: %.2f.\n\n", juros);

                        printf("\n\n \t Clique qualquer botão para continuar o cadastro \n\n");
                        system("pause");
                    }
                break;
            case 3:
                system("cls");
                printf("\n \t ===========================");
                printf("\n \t Quais dados deseja editar ?");
                printf("\n \t =========================== \n");
                printf("\t |1-Nomes              | \n");
                printf("\t |2-CPFs               | \n");
                printf("\t |3-Datas de Nascimento| \n");
                printf("\t");
                scanf("%d",&op3);
                switch(op3)
                {
                    case 1:
                        for(i=1;i<=cad;i++)
                        {
                            system("cls");
                            printf("\n\n Nome do produto %d \n");
                            printf("\t\t \n Alterar nome:\n"); printf("%s",c[i].nome);
                            printf("\t \n");
                            fflush(stdin);
                            scanf("%s",c[i].nome);
                            printf("\t\t \n Novo nome:"); printf("%s",c[i].nome);
                        }
                        break;
                    case 2:
                        for(i=1;i<=cad;i++)
                        {
                            system("cls");
                            printf("\t\t \n Alterar CPF:\n"); printf("%s",c[i].cpf);
                            printf("\t \n");
                            fflush(stdin);
                            scanf("%s",c[i].cpf);
                            printf("\t\t \n Novo CPF:"); printf("%s",c[i].cpf);
                        }
                        break;
                    case 3:
                        for(i=1;i<=cad;i++)
                        {
                            system("cls");
                            printf("\t\t \n Alterar a data de nascimento:\n"); printf("%s",c[i].datadenasc);
                            printf("\t \n");
                            fflush(stdin);
                            scanf("%s",c[i].datadenasc);
                            printf("\t\t \n Nova data de nascimento:"); printf("%s",c[i].datadenasc);
                        }
                        break;
                }
                    break;
            case 4:
                printf("\n \t ======================");
                printf("\n \t   Visualizar dados");
                printf("\n \t ======================");
                for(i=1;i<=cad;i++)
                {
                    printf("\n Nome do cliente %s\n",c[i].nome);
                    printf("\n CPF do cliente %s\n",c[i].cpf);
                    printf("\n Data de nascimento %s\n",c[i].datadenasc);
                }

                system("pause");

                break;

            case 5:
                system("cls");
                printf("\n \t ==========================");
                printf("\n \t O que voce deseja remover?");
                printf("\n \t ========================== \n");
                printf("\t |1-Nomes              | \n");
                printf("\t |2-CPFs               | \n");
                printf("\t |3-Datas de nascimento| \n");
                printf("\t |4-Tudo               | \n");
                printf("\t");
                scanf("%d",&op2);

                switch(op2)
                {
                        case 1:
                        for(i=1;i<=cad;i++)
                        {
                            system("cls");
                            memset(c[i].nome,0,sizeof(c[i].nome));
                        }
                        break;
                    case 2:
                        for(i=1;i<=cad;i++)
                        {
                            system("cls");
                            memset(c[i].cpf,0,sizeof(c[i].cpf));
                        }
                        break;
                    case 3:
                        for(i=1;i<=cad;i++)
                        {
                            system("cls");
                            memset(c[i].datadenasc,0,sizeof(c[i].datadenasc));
                        }
                        break;
                    case 4:
                        system("cls");
                        memset(c[i].nome,0,sizeof(c[i].nome));
                        memset(c[i].cpf,0,sizeof(c[i].cpf));
                        memset(c[i].datadenasc,0,sizeof(c[i].datadenasc));
                        printf("\t\t \n Tudo foi apagado \n\n");
                        system("pause");
                        break;
                }
                break;
            case 6:
                printf("\t\t \n Obrigrado por usar o meu programa :D\n\n");
                system("pause");
                break;
            default:
                printf("\n Opção invalida!\n");
        }

        system("cls");

    } while (opcao != 6);

    return 0;
}
