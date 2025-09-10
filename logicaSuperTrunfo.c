#include <stdio.h>
#include <stdlib.h>


int main() {
   
    // Criação das varieveis

    int opcao;

    char Estado_1[20];
    char Codigo_da_carta_1[10];
    char Nome_da_cidade_1[50];
    int Populacao_1=0;
    float Area_em_km_1=0;
    float Pib_1=0;
    int N_pontos_turisticos_1=0;
    float Densidade_1=0;
    float Pib_percapta_1=0;

    char Estado_2[20];
    char Codigo_da_carta_2[10];
    char Nome_da_cidade_2[50];
    int Populacao_2=0;
    float Area_em_km_2=0;
    float Pib_2=0;
    int N_pontos_turisticos_2=0;
    float Densidade_2=0;
    float Pib_percapta_2=0;
 

    //inicialização dos valores da carta 1
    printf("---Digite os valores da carta 1--- \n");
    printf("Letra do Estado: \n");
    scanf("%s",Estado_1);

    printf("Codigo da carta: \n");
    scanf("%s",Codigo_da_carta_1);

    printf("Nome da cidade: \n");
    scanf("%s",Nome_da_cidade_1);

    printf("Populacao: \n");
    scanf("%d",&Populacao_1);

    printf("Area em km: \n");
    scanf("%f",&Area_em_km_1);

    printf("Pib: \n");
    scanf("%f",&Pib_1);

    printf("Pontos turisticos: \n");
    scanf("%d",&N_pontos_turisticos_1);

    
    //inicialização dos valores da carta 2
    printf("---Digite os valores da carta 2--- \n");
    printf("Letra do Estado: \n");
    scanf("%s",Estado_2);

    printf("Codigo da carta: \n");
    scanf("%s",Codigo_da_carta_2);

    printf("Nome da cidade: \n");
    scanf("%s",Nome_da_cidade_2);

    printf("Populacao: \n");
    scanf("%d",&Populacao_2);

    printf("Area em km: \n");
    scanf("%f",&Area_em_km_2);

    printf("Pib: \n");
    scanf("%f",&Pib_2);

    printf("Pontos turisticos: \n");
    scanf("%d",&N_pontos_turisticos_2);

    //calculo da densidade
    Densidade_1 = Populacao_1 / Area_em_km_1;
    Densidade_2 = Populacao_2 / Area_em_km_2;

    //calculo do pib percapta
    Pib_percapta_1 = Pib_1 / Populacao_1;
    Pib_percapta_2 = Pib_2 / Populacao_2;

    //exibe os dados das cartas
    printf(
        "Carta 1 \n"
        "Estado: %s\n"
        "Codigo: %s\n"
        "Nome da cidade : %s\n"
        "Populacao: %d\n"
        "Area em km: %.0f\n"
        "Pib: %.2f\n"
        "Quantidade de pontos turisticos: %d\n\n",
        Estado_1,
        Codigo_da_carta_1,
        Nome_da_cidade_1,
        Populacao_1,
        Area_em_km_1,
        Pib_1,
        N_pontos_turisticos_1
    );
    
     printf(
        "\nCarta 2 \n"
        "Estado: %s\n"
        "Codigo: %s\n"
        "Nome da cidade : %s\n"
        "Populacao: %d\n"
        "Area em km: %.0f\n"
        "Pib: %.2f\n"
        "Quantidade de pontos turisticos: %d\n\n",
        Estado_2,
        Codigo_da_carta_2,
        Nome_da_cidade_2,
        Populacao_2,
        Area_em_km_2,
        Pib_2,
        N_pontos_turisticos_2
    );

    //teste de condição para o vencedor
    printf("----BATALHA----\n\n");
    printf("Escolha qual atributo gostaria de escolher. \n");
    printf("1 - POR DENSIDADE. \n");
    printf("2 - POR PIB. \n");
    printf("3 - POR POPULACAO. \n");
    printf("4 - POR AREA. \n");
    printf("5 - POR PONTOS TURISTICOS. \n");
    scanf("%d", &opcao);

    //menu de seleção da batalha
    switch (opcao)
    {
    case 1:
         printf("---Por Densidade---\n");
        if (Densidade_1 < Densidade_2)
        {
            printf("--- %s e a VENCEDORA!!! ----\n",Nome_da_cidade_1);
        }else if(Densidade_1 > Densidade_2)(
            printf("--- %s e a VENCEDORA!!! ---\n",Nome_da_cidade_2)
        );else
        {
            printf("EMPATE.\n");
        }
        
        break;
    
    case 2:
        printf("---Por Pib percapta---\n");
        if (Pib_percapta_1 > Pib_percapta_2)
        {
            printf("--- %s e a VENCEDORA!!! ----\n",Nome_da_cidade_1);
        }else if(Pib_1 < Pib_2)(
            printf("--- %s e a VENCEDORA!!! ---\n",Nome_da_cidade_2)
        );else
        {
            printf("Empate\n");
        }
        
        break;
    
    case 3:
        printf("---Por Populacao--- \n");
        if (Populacao_1 > Populacao_2)
        {
            printf("--- %s e a VENCEDORA!!! ---\n",Nome_da_cidade_1);
        }else if(Populacao_1 < Populacao_2)(
            printf("--- %s e a VENCEDORA!!! ---\n",Nome_da_cidade_2)
        );else
        {
            printf("Empate\n");
        }
        
        break;
    
    case 4:
        printf("---Por Area--- \n");
        if (Area_em_km_1 > Area_em_km_2)
        {
            printf("--- %s e a VENCEDORA!!! ---\n",Nome_da_cidade_1);
        }else if(Area_em_km_1 < Area_em_km_2)(
            printf("--- %s e a VENCEDORA!!! ---\n",Nome_da_cidade_2)
        );else
        {
            printf("Empate \n");
        }
        
        break;
    
    case 5:
        printf("---Por Pontos Turisticos--- \n");
        if (N_pontos_turisticos_1 > N_pontos_turisticos_2)
        {
            printf("--- %s e a VENCEDORA!!! ---\n",Nome_da_cidade_1);
        }else if(N_pontos_turisticos_1 < N_pontos_turisticos_2)(
            printf("--- %s e a VENCEDORA!!! ---\n",Nome_da_cidade_2)
        );else
        {
            pr("Empate \n");
        }
        
        break;
    
    default:
        printf("Digite uma opcao valida");
        break;
    }

    
    









   
 /* estudos do switch

    int opcao,valor_1,valor_2;

    printf("Teste de switch \n");
    printf("Digite Valor 1 \n");
    scanf("%d", &valor_1);
    printf("Digite Valor 2 \n");
    scanf("%d", &valor_2);

    printf("1 - Soma \n");
    printf("2 - Subtração \n");
    printf("3 - Multiplicacao \n");
    printf("4 - Divisao \n");
    scanf("%d", &opcao);

    switch (opcao){
        case 1:
            printf("A soma do valor 1 + valor 2 e: %d",valor_1+valor_2);
            break;
        
        case 2:
            printf("A subtracao do valor 1 + valor 2 e: %d",valor_1-valor_2);
            break;
        
        case 3:
            printf("A multiplicacao do valor 1 + valor 2 e: %d",valor_1*valor_2);
            break;
        
        case 4:
            if (valor_2 != 0)
            {
            printf("A Divisao do valor 1 + valor 2 e: %d",valor_1/valor_2);
            break;    
            }else(
                printf("Valor 1 nao pode ser dividido por 0 \n")
            );
            break;
        
        default:
            printf("Opcao invalida,  digite um valor de 1 a 4 para continuar! \n");
            break;    
    }        
*/

/*
    int opcao,dado,adivinhacao;

    dado= (rand() % 10)+1;

    printf("--- JOGO DA ADVINHACAO ---\n\n");
    printf("1 - INICIAR O JOGO \n");
    printf("2 - VER REGRAS \n");
    printf("3 - SAIR \n");

    printf("DIGITE A OPCAO DESEJADA \n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        
        printf("FACA SUA APOSTA EM NUMERO DE 1 A 10 \n");
        scanf("%d",&adivinhacao);

        if (dado == adivinhacao)
        {
            printf("O NUMERO SORTEADO FOI %d \n",dado);
            printf("PARABENS VOCE GANHOU!!! \n");
        }else
        {
            printf("O NUMERO SORTEADO FOI %d \n",dado);
            printf("BOA SORTE NA PROXIMA. \n");
        }
        break;
    
    case 2:
        
        printf("AS REGRAS SAO SIMPLES, VOCE ESCOLHE UM NUMERO DE 1 A 10, SE ACERTAR O VALOR GERADO VOCE GANHA");
        break;
    
    case 3:
        
        printf("SAINDO DO JOGO.");
        break;
    
    default:
        
        printf("ESCOLHA UMA OPCAO VALIDA!");
        break;
    }
*/



    return 0;
}
