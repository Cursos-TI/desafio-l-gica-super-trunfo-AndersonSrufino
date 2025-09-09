#include <stdio.h>



int main() {
   
    // Criação das varieveis
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
        "Quantidade de pontos turisticos: %d\n",
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
        "Quantidade de pontos turisticos: %d\n",
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

    printf("---Por Densidade---\n");
    if (Densidade_1 > Densidade_2)
    {
        printf("--- %s e a VENCEDORA!!! ----\n",Nome_da_cidade_1);
    }else(
        printf("--- %s e a VENCEDORA!!! ---\n",Nome_da_cidade_2)
    );
    
    printf("----BATALHA----\n\n");

    printf("---Por Pib percapta---\n");
    if (Pib_percapta_1 > Pib_percapta_2)
    {
        printf("--- %s e a VENCEDORA!!! ----\n",Nome_da_cidade_2);
    }else(
        printf("--- %s e a VENCEDORA!!! ---\n",Nome_da_cidade_2)
    );
    

   
 
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
