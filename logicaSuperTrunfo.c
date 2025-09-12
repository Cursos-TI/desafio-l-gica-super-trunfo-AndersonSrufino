#include <stdio.h>
#include <stdlib.h>

int main()
{

    // Criação das varieveis

    int opcao_menu_1, opcao_menu_2;
    float valor_attr1_pais1, valor_attr2_pais1, soma_pais1;
    float valor_attr1_pais2, valor_attr2_pais2, soma_pais2;

    char Pais_1[20];
    int Populacao_1 = 0;
    float Area_em_km_1 = 0;
    float Pib_1 = 0;
    int N_pontos_turisticos_1 = 0;
    float Densidade_1 = 0;
    float Pib_percapta_1 = 0;

    char Pais_2[20];
    int Populacao_2 = 0;
    float Area_em_km_2 = 0;
    float Pib_2 = 0;
    int N_pontos_turisticos_2 = 0;
    float Densidade_2 = 0;
    float Pib_percapta_2 = 0;

    // inicialização dos valores da carta 1
    printf("---Digite os valores da carta 1--- \n");
    printf("Pais: \n");
    scanf("%s", Pais_1);

    printf("Populacao: \n");
    scanf("%d", &Populacao_1);

    printf("Area em km: \n");
    scanf("%f", &Area_em_km_1);

    printf("Pib: \n");
    scanf("%f", &Pib_1);

    printf("Pontos turisticos: \n");
    scanf("%d", &N_pontos_turisticos_1);

    // inicialização dos valores da carta 2
    printf("---Digite os valores da carta 2--- \n");
    printf("Pais: \n");
    scanf("%s", Pais_2);

    printf("Populacao: \n");
    scanf("%d", &Populacao_2);

    printf("Area em km: \n");
    scanf("%f", &Area_em_km_2);

    printf("Pib: \n");
    scanf("%f", &Pib_2);

    printf("Pontos turisticos: \n");
    scanf("%d", &N_pontos_turisticos_2);

    // calculo da densidade
    Densidade_1 = Populacao_1 / Area_em_km_1;
    Densidade_2 = Populacao_2 / Area_em_km_2;

    // calculo do pib percapta
    Pib_percapta_1 = Pib_1 / Populacao_1;
    Pib_percapta_2 = Pib_2 / Populacao_2;

    // exibe os dados das cartas
    printf(
        "Carta 1 \n"
        "Pais: %s\n"
        "Populacao: %d\n"
        "Area em km: %.0f\n"
        "Pib: %.2f\n"
        "Quantidade de pontos turisticos: %d\n\n",
        Pais_1,
        Populacao_1,
        Area_em_km_1,
        Pib_1,
        N_pontos_turisticos_1);

    printf(
        "\nCarta 2 \n"
        "Pais: %s\n"
        "Populacao: %d\n"
        "Area em km: %.0f\n"
        "Pib: %.2f\n"
        "Quantidade de pontos turisticos: %d\n\n",
        Pais_2,
        Populacao_2,
        Area_em_km_2,
        Pib_2,
        N_pontos_turisticos_2);

    // teste de condição para a batalha menu 1
    printf("----BATALHA----\n\n");
    printf("Qual o 1 atributo gostaria de escolher. \n");
    printf("1 - POR DENSIDADE. \n");
    printf("2 - POR PIB. \n");
    printf("3 - POR POPULACAO. \n");
    printf("4 - POR AREA. \n");
    printf("5 - POR PONTOS TURISTICOS. \n");
    scanf("%d", &opcao_menu_1);

    // teste de condição para a batalha menu 2
    printf("----BATALHA----\n\n");
    printf("Qual o 2 atributo gostaria de escolher. \n");
    printf("1 - POR DENSIDADE. \n");
    printf("2 - POR PIB. \n");
    printf("3 - POR POPULACAO. \n");
    printf("4 - POR AREA. \n");
    printf("5 - POR PONTOS TURISTICOS. \n");
    scanf("%d", &opcao_menu_2);

    // verifica se menu é repetido
    if (opcao_menu_1 != opcao_menu_2)
    {
        // Pega o valor do ATRIBUTO 1 para cada país
        switch (opcao_menu_1)
        {
        case 1:
            valor_attr1_pais1 = Densidade_1;
            valor_attr1_pais2 = Densidade_2;
            break;
        case 2:
            valor_attr1_pais1 = Pib_percapta_1;
            valor_attr1_pais2 = Pib_percapta_2;
            break;
        case 3:
            valor_attr1_pais1 = (float)Populacao_1;
            valor_attr1_pais2 = (float)Populacao_2;
            break;
        case 4:
            valor_attr1_pais1 = Area_em_km_1;
            valor_attr1_pais2 = Area_em_km_2;
            break;
        case 5:
            valor_attr1_pais1 = (float)N_pontos_turisticos_1;
            valor_attr1_pais2 = (float)N_pontos_turisticos_2;
            break;
        default:
            printf("Opcao invalida!\n");
            break;
        }

        // Pega o valor do ATRIBUTO 2 para cada país
        switch (opcao_menu_2)
        {
        case 1:
            valor_attr2_pais1 = Densidade_1;
            valor_attr2_pais2 = Densidade_2;
            break;
        case 2:
            valor_attr2_pais1 = Pib_percapta_1;
            valor_attr2_pais2 = Pib_percapta_2;
            break;
        case 3:
            valor_attr2_pais1 = (float)Populacao_1;
            valor_attr2_pais2 = (float)Populacao_2;
            break;
        case 4:
            valor_attr2_pais1 = Area_em_km_1;
            valor_attr2_pais2 = Area_em_km_2;
            break;
        case 5:
            valor_attr2_pais1 = (float)N_pontos_turisticos_1;
            valor_attr2_pais2 = (float)N_pontos_turisticos_2;
            break;
        default:
            printf("Opcao invalida!\n");
            break;
        }

        // CAlculo da soma
        soma_pais1 = valor_attr1_pais1 + valor_attr2_pais1;
        soma_pais2 = valor_attr1_pais2 + valor_attr2_pais2;

        printf("--- QUESITO 1 --- \n");

        // exibir as informacoes
        switch (opcao_menu_1)
        {
        case 1:
            printf("--- POR DENSIDADE---\n");
            if (Densidade_1 < Densidade_2)
            {
                printf("--- %s X %s --- \n", Pais_1, Pais_2);
                printf("--- Batalha no quesito DENSIDADE --- \n");
                printf("---> Densidade %s: %.0f <-- X --> Densidade %s: %.1f <-- \n", Pais_1, Densidade_1, Pais_2, Densidade_2);
                if (soma_pais1 < soma_pais2)
                {
                    printf("--- A soma do %s: %f\n", Pais_1, soma_pais1);
                    printf("--- A soma do %s: %f\n", Pais_2, soma_pais2);
                    printf("--- VENCEDOR : %s ---\n", Pais_1);
                }
                else
                {
                    printf("--- A soma do %s: %f\n", Pais_1, soma_pais1);
                    printf("--- A soma do %s: %f\n", Pais_2, soma_pais2);
                    printf("--- VENCEDOR: %s ---\n", Pais_2);
                }
            }
            else if (Densidade_1 > Densidade_2)
            {
                printf("--- %s X %s ---", Pais_1, Pais_2);
                printf("--- Batalha no quesito DENSIDADE ---\n");
                printf("--> Densidade %s: %f <-- X --> Densidade %s: %.1f <-- \n", Pais_1, Densidade_1, Pais_2, Densidade_2);
                if (soma_pais1 > soma_pais2)
                {
                    printf("--- A soma do %s: %f\n", Pais_1, soma_pais1);
                    printf("--- A soma do %s: %f\n", Pais_2, soma_pais2);
                    printf("--- VENCEDOR : %s ---\n", Pais_2);
                }
                else
                {
                    printf("--- A soma do %s: %f\n", Pais_1, soma_pais1);
                    printf("--- A soma do %s: %f\n", Pais_2, soma_pais2);
                    printf("--- VENCEDOR: %s ---\n", Pais_1);
                }
            }
            else
            {
                printf("--- %s X %s --- \n", Pais_1, Pais_2);
                printf("--- Batalha no quesito DENSIDADE ---\n");
                printf("--> Densidade %s: %.1f <-- X --> Densidade %s: %.1f <-- \n", Pais_1, Densidade_1, Pais_2, Densidade_2);
                printf("Empate!! \n");
            }
            break;
        case 2:
            printf("--- POR PIB PERCAPTA ---\n");
            if (Pib_percapta_1 > Pib_percapta_2)
            {
                printf("--- %s X %s --- \n", Pais_1, Pais_2);
                printf("--- Batalha no quesito PIB PERCAPTA ---\n");
                printf("--> Pib Percapta %s: %.1f <-- X --> Pib Percapta %s: %.1f <-- \n", Pais_1, Pib_percapta_1, Pais_2, Pib_percapta_2);
                if (soma_pais1 > soma_pais2)
                {
                    printf("--- A soma do %s: %f\n", Pais_1, soma_pais1);
                    printf("--- A soma do %s: %f\n", Pais_2, soma_pais2);
                    printf("--- VENCEDOR : %s ---\n", Pais_1);
                }
                else
                {
                    printf("--- A soma do %s: %f\n", Pais_1, soma_pais1);
                    printf("--- A soma do %s: %f\n", Pais_2, soma_pais2);
                    printf("--- VENCEDOR: %s ---\n", Pais_2);
                }
            }
            else if (Pib_1 < Pib_2)
            {
                printf("--- %s X %s --- \n", Pais_1, Pais_2);
                printf("--- Batalha no quesito PIB PERCAPTA ---\n");
                printf("--> Pib Percapta %s: %.1f <-- X --> Pib Percapta %s: %.1f <-- \n", Pais_1, Pib_percapta_1, Pais_2, Pib_percapta_2);
                if (soma_pais1 < soma_pais2)
                {
                    printf("--- A soma do %s: %f\n", Pais_1, soma_pais1);
                    printf("--- A soma do %s: %f\n", Pais_2, soma_pais2);
                    printf("--- VENCEDOR : %s ---\n", Pais_2);
                }
                else
                {
                    printf("--- A soma do %s: %f\n", Pais_1, soma_pais1);
                    printf("--- A soma do %s: %f\n", Pais_2, soma_pais2);
                    printf("--- VENCEDOR: %s ---\n", Pais_1);
                }
            }
            else
            {
                printf("--- %s X %s --- \n", Pais_1, Pais_2);
                printf("--- Batalha no quesito PIB PERCAPTA ---\n");
                printf("--> Pib Percapta %s: %.1f <-- X --> Pib Percapta %s: %.1f <-- \n", Pais_1, Pib_percapta_1, Pais_2, Pib_percapta_2);
                printf("--- Empate!! --- \n");
            }

            break;
        case 3:
            printf("--- POR POPULACAO--- \n");
            if (Populacao_1 > Populacao_2)
            {
                printf("--- %s X %s --- \n", Pais_1, Pais_2);
                printf("--- Batalha no quesito Populacao ---\n");
                printf("--> Populacao %s: %d <-- X --> Populacao %s: %d <-- \n", Pais_1, Populacao_1, Pais_2, Populacao_2);
                if (soma_pais1 > soma_pais2)
                {
                    printf("--- A soma do %s: %f\n", Pais_1, soma_pais1);
                    printf("--- A soma do %s: %f\n", Pais_2, soma_pais2);
                    printf("--- VENCEDOR : %s ---\n", Pais_1);
                }
                else
                {
                    printf("--- A soma do %s: %f\n", Pais_1, soma_pais1);
                    printf("--- A soma do %s: %f\n", Pais_2, soma_pais2);
                    printf("--- VENCEDOR: %s ---\n", Pais_2);
                }
            }
            else if (Populacao_1 < Populacao_2)
            {
                printf("--- %s X %s --- \n", Pais_1, Pais_2);
                printf("--- Batalha no quesito Populacao ---\n");
                printf("--> Populacao %s: %d <-- X --> Populacao %s: %d <-- \n", Pais_1, Populacao_1, Pais_2, Populacao_2);
                if (soma_pais1 < soma_pais2)
                {
                    printf("--- A soma do %s: %f\n", Pais_1, soma_pais1);
                    printf("--- A soma do %s: %f\n", Pais_2, soma_pais2);
                    printf("--- VENCEDOR : %s ---\n", Pais_2);
                }
                else
                {
                    printf("--- A soma do %s: %f\n", Pais_1, soma_pais1);
                    printf("--- A soma do %s: %f\n", Pais_2, soma_pais2);
                    printf("--- VENCEDOR: %s ---\n", Pais_1);
                }
            }
            else
            {
                printf("--- %s X %s --- \n", Pais_1, Pais_2);
                printf("--- Batalha no quesito Populacao ---\n");
                printf("--> Populacao %s: %d <-- X --> Populacao %s: %d <-- \n", Pais_1, Populacao_1, Pais_2, Populacao_2);
                printf("--- Empate!! ---\n");
            }
            break;
        case 4:
            printf("--- POR AREA--- \n");
            if (Area_em_km_1 > Area_em_km_2)
            {
                printf("--- %s X %s --- \n", Pais_1, Pais_2);
                printf("--- Batalha no quesito Area ---\n");
                printf("--> Area %s: %.1f <-- X --> Area %s: %.1f <-- \n", Pais_1, Area_em_km_1, Pais_2, Area_em_km_2);
                if (soma_pais1 > soma_pais2)
                {
                    printf("--- A soma do %s: %f\n", Pais_1, soma_pais1);
                    printf("--- A soma do %s: %f\n", Pais_2, soma_pais2);
                    printf("--- VENCEDOR : %s ---\n", Pais_1);
                }
                else
                {
                    printf("--- A soma do %s: %f\n", Pais_1, soma_pais1);
                    printf("--- A soma do %s: %f\n", Pais_2, soma_pais2);
                    printf("--- VENCEDOR: %s ---\n", Pais_2);
                }
            }
            else if (Area_em_km_1 < Area_em_km_2)
            {
                printf("--- %s X %s --- \n", Pais_1, Pais_2);
                printf("--- Batalha no quesito Area ---\n");
                printf("--> Area %s: %.1f <-- X --> Area %s: %.1f <-- \n", Pais_1, Area_em_km_1, Pais_2, Area_em_km_2);
                if (soma_pais1 < soma_pais2)
                {
                    printf("--- A soma do %s: %f\n", Pais_1, soma_pais1);
                    printf("--- A soma do %s: %f\n", Pais_2, soma_pais2);
                    printf("--- VENCEDOR : %s ---\n", Pais_2);
                }
                else
                {
                    printf("--- A soma do %s: %f\n", Pais_1, soma_pais1);
                    printf("--- A soma do %s: %f\n", Pais_2, soma_pais2);
                    printf("--- VENCEDOR: %s ---\n", Pais_1);
                }
            }
            else
            {
                printf("--- %s X %s --- \n", Pais_1, Pais_2);
                printf("--- Batalha no quesito Area ---\n");
                printf("--> Area %s: %.1f <-- X --> Area %s: %.1f <-- \n", Pais_1, Area_em_km_1, Pais_2, Area_em_km_2);
                printf("--- Empate!! ---\n");
            }

            break;
        case 5:
            printf("--- POR PONTOS TURISTICOS--- \n");
            if (N_pontos_turisticos_1 > N_pontos_turisticos_2)
            {
                printf("--- %s X %s --- \n", Pais_1, Pais_2);
                printf("--- Batalha no quesito Pontos Turisticos ---\n");
                printf("--> Pontos Turisticos %s: %d <-- X --> Pontos Turisticos %s: %d <-- \n", Pais_1, N_pontos_turisticos_1, Pais_2, N_pontos_turisticos_2);
                if (soma_pais1 > soma_pais2)
                {
                    printf("--- A soma do %s: %f\n", Pais_1, soma_pais1);
                    printf("--- A soma do %s: %f\n", Pais_2, soma_pais2);
                    printf("--- VENCEDOR : %s ---\n", Pais_1);
                }
                else
                {
                    printf("--- A soma do %s: %f\n", Pais_1, soma_pais1);
                    printf("--- A soma do %s: %f\n", Pais_2, soma_pais2);
                    printf("--- VENCEDOR: %s ---\n", Pais_2);
                }
            }
            else if (N_pontos_turisticos_1 < N_pontos_turisticos_2)
            {
                printf("--- %s X %s --- \n", Pais_1, Pais_2);
                printf("--- Batalha no quesito Pontos Turisticos ---\n");
                printf("--> Pontos Turisticos %s: %d <-- X --> Pontos Turisticos %s: %d <-- \n", Pais_1, N_pontos_turisticos_1, Pais_2, N_pontos_turisticos_2);
                if (soma_pais1 < soma_pais2)
                {
                    printf("--- A soma do %s: %f\n", Pais_1, soma_pais1);
                    printf("--- A soma do %s: %f\n", Pais_2, soma_pais2);
                    printf("--- VENCEDOR : %s ---\n", Pais_2);
                }
                else
                {
                    printf("--- A soma do %s: %f\n", Pais_1, soma_pais1);
                    printf("--- A soma do %s: %f\n", Pais_2, soma_pais2);
                    printf("--- VENCEDOR: %s ---\n", Pais_1);
                }
            }
            else
            {
                printf("--- %s X %s --- \n", Pais_1, Pais_2);
                printf("--- Batalha no quesito Pontos Turisticos ---\n");
                printf("--> Pontos Turisticos %s: %d <-- X --> Pontos Turisticos %s: %d <-- \n", Pais_1, N_pontos_turisticos_1, Pais_2, N_pontos_turisticos_2);
                printf("--- Empate!! ---");
            }

            break;

        default:
            break;
        }

        printf("\n--- QUESITO 2 ---\n");

        //exibe as informacoes da 2 comparação
        switch (opcao_menu_2)
        {
        case 1:
            printf("--- POR DENSIDADE---\n");
            if (Densidade_1 < Densidade_2)
            {
                printf("--- %s X %s --- \n", Pais_1, Pais_2);
                printf("--- Batalha no quesito DENSIDADE ---\n");
                printf("--> Densidade %s: %.0f <-- X --> Densidade %s: %.1f <-- \n", Pais_1, Densidade_1, Pais_2, Densidade_2);
                if (soma_pais1 < soma_pais2)
                {
                    printf("--- A soma do %s: %f\n", Pais_1, soma_pais1);
                    printf("--- A soma do %s: %f\n", Pais_2, soma_pais2);
                    printf("--- VENCEDOR : %s ---\n", Pais_1);
                }
                else
                {
                    printf("--- A soma do %s: %f\n", Pais_1, soma_pais1);
                    printf("--- A soma do %s: %f\n", Pais_2, soma_pais2);
                    printf("--- VENCEDOR: %s ---\n", Pais_2);
                }
            }
            else if (Densidade_1 > Densidade_2)
            {
                printf("--- %s X %s ---", Pais_1, Pais_2);
                printf("--- Batalha no quesito DENSIDADE ---\n");
                printf("--> Densidade %s: %f <-- X --> Densidade %s: %.1f <-- \n", Pais_1, Densidade_1, Pais_2, Densidade_2);
                if (soma_pais1 > soma_pais2)
                {
                    printf("--- A soma do %s: %f\n", Pais_1, soma_pais1);
                    printf("--- A soma do %s: %f\n", Pais_2, soma_pais2);
                    printf("--- VENCEDOR : %s ---\n", Pais_2);
                }
                else
                {
                    printf("--- A soma do %s: %f\n", Pais_1, soma_pais1);
                    printf("--- A soma do %s: %f\n", Pais_2, soma_pais2);
                    printf("--- VENCEDOR: %s ---\n", Pais_1);
                }
            }
            else
            {
                printf("--- %s X %s --- \n", Pais_1, Pais_2);
                printf("--- Batalha no quesito DENSIDADE ---\n");
                printf("--> Densidade %s: %.1f <-- X --> Densidade %s: %.1f <-- \n", Pais_1, Densidade_1, Pais_2, Densidade_2);
                printf("Empate!! \n");
            }
            break;
        case 2:
            printf("--- Por PIB PERCAPTA ---\n");
            if (Pib_percapta_1 > Pib_percapta_2)
            {
                printf("--- %s X %s --- \n", Pais_1, Pais_2);
                printf("--- Batalha no quesito PIB PERCAPTA ---\n");
                printf("--> Pib Percapta %s: %.1f <-- X --> Pib Percapta %s: %.1f <-- \n", Pais_1, Pib_percapta_1, Pais_2, Pib_percapta_2);
                if (soma_pais1 > soma_pais2)
                {
                    printf("--- A soma do %s: %f\n", Pais_1, soma_pais1);
                    printf("--- A soma do %s: %f\n", Pais_2, soma_pais2);
                    printf("--- VENCEDOR : %s ---\n", Pais_1);
                }
                else
                {
                    printf("--- A soma do %s: %f\n", Pais_1, soma_pais1);
                    printf("--- A soma do %s: %f\n", Pais_2, soma_pais2);
                    printf("--- VENCEDOR: %s ---\n", Pais_2);
                }
            }
            else if (Pib_percapta_1 < Pib_percapta_2)
            {
                printf("--- %s X %s --- \n", Pais_1, Pais_2);
                printf("--- Batalha no quesito PIB PERCAPTA ---\n");
                printf("--> Pib Percapta %s: %.1f <-- X --> Pib Percapta %s: %.1f <-- \n", Pais_1, Pib_percapta_1, Pais_2, Pib_percapta_2);
                if (soma_pais1 < soma_pais2)
                {
                    printf("--- A soma do %s: %f\n", Pais_1, soma_pais1);
                    printf("--- A soma do %s: %f\n", Pais_2, soma_pais2);
                    printf("--- VENCEDOR : %s ---\n", Pais_2);
                }
                else
                {
                    printf("--- A soma do %s: %f\n", Pais_1, soma_pais1);
                    printf("--- A soma do %s: %f\n", Pais_2, soma_pais2);
                    printf("--- VENCEDOR: %s ---\n", Pais_1);
                }
            }
            else
            {
                printf("--- %s X %s --- \n", Pais_1, Pais_2);
                printf("--- Batalha no quesito PIB PERCAPTA ---\n");
                printf("--> Pib Percapta %s: %.1f <-- X --> Pib Percapta %s: %.1f <-- \n", Pais_1, Pib_percapta_1, Pais_2, Pib_percapta_2);
                printf("--- Empate!! --- \n");
            }

            break;
        case 3:
            printf("---POR POPULACAO--- \n");
            if (Populacao_1 > Populacao_2)
            {
                printf("--- %s X %s --- \n", Pais_1, Pais_2);
                printf("--- Batalha no quesito Populacao ---\n");
                printf("--> Populacao %s: %d <-- X --> Populacao %s: %d <-- \n", Pais_1, Populacao_1, Pais_2, Populacao_2);
                if (soma_pais1 > soma_pais2)
                {
                    printf("--- A soma do %s: %f\n", Pais_1, soma_pais1);
                    printf("--- A soma do %s: %f\n", Pais_2, soma_pais2);
                    printf("--- VENCEDOR : %s ---\n", Pais_1);
                }
                else
                {
                    printf("--- A soma do %s: %f\n", Pais_1, soma_pais1);
                    printf("--- A soma do %s: %f\n", Pais_2, soma_pais2);
                    printf("--- VENCEDOR: %s ---\n", Pais_2);
                }
            }
            else if (Populacao_1 < Populacao_2)
            {
                printf("--- %s X %s --- \n", Pais_1, Pais_2);
                printf("--- Batalha no quesito Populacao ---\n");
                printf("--> Populacao %s: %d <-- X --> Populacao %s: %d <-- \n", Pais_1, Populacao_1, Pais_2, Populacao_2);
                if (soma_pais1 < soma_pais2)
                {
                    printf("--- A soma do %s: %f\n", Pais_1, soma_pais1);
                    printf("--- A soma do %s: %f\n", Pais_2, soma_pais2);
                    printf("--- VENCEDOR : %s ---\n", Pais_2);
                }
                else
                {
                    printf("--- A soma do %s: %f\n", Pais_1, soma_pais1);
                    printf("--- A soma do %s: %f\n", Pais_2, soma_pais2);
                    printf("--- VENCEDOR: %s ---\n", Pais_1);
                }
            }
            else
            {
                printf("--- %s X %s --- \n", Pais_1, Pais_2);
                printf("--- Batalha no quesito Populacao ---\n");
                printf("--> Populacao %s: %d <-- X --> Populacao %s: %d <-- \n", Pais_1, Populacao_1, Pais_2, Populacao_2);
                printf("--- Empate!! ---\n");
            }
            break;
        case 4:
            printf("---POR AREA--- \n");
            if (Area_em_km_1 > Area_em_km_2)
            {
                printf("--- %s X %s --- \n", Pais_1, Pais_2);
                printf("--- Batalha no quesito Area ---\n");
                printf("--> Area %s: %.1f <-- X --> Area %s: %.1f <-- \n", Pais_1, Area_em_km_1, Pais_2, Area_em_km_2);
                if (soma_pais1 > soma_pais2)
                {
                    printf("--- A soma do %s: %f\n", Pais_1, soma_pais1);
                    printf("--- A soma do %s: %f\n", Pais_2, soma_pais2);
                    printf("--- VENCEDOR : %s ---\n", Pais_1);
                }
                else
                {
                    printf("--- A soma do %s: %f\n", Pais_1, soma_pais1);
                    printf("--- A soma do %s: %f\n", Pais_2, soma_pais2);
                    printf("--- VENCEDOR: %s ---\n", Pais_2);
                }
            }
            else if (Area_em_km_1 < Area_em_km_2)
            {
                printf("--- %s X %s --- \n", Pais_1, Pais_2);
                printf("--- Batalha no quesito Area ---\n");
                printf("--> Area %s: %.1f <-- X --> Area %s: %.1f <-- \n", Pais_1, Area_em_km_1, Pais_2, Area_em_km_2);
                if (soma_pais1 < soma_pais2)
                {
                    printf("--- A soma do %s: %f\n", Pais_1, soma_pais1);
                    printf("--- A soma do %s: %f\n", Pais_2, soma_pais2);
                    printf("--- VENCEDOR : %s ---\n", Pais_2);
                }
                else
                {
                    printf("--- A soma do %s: %f\n", Pais_1, soma_pais1);
                    printf("--- A soma do %s: %f\n", Pais_2, soma_pais2);
                    printf("--- VENCEDOR: %s ---\n", Pais_1);
                }
            }
            else
            {
                printf("--- %s X %s --- \n", Pais_1, Pais_2);
                printf("--- Batalha no quesito Area ---\n");
                printf("--> Area %s: %.1f <-- X --> Area %s: %.1f <-- \n", Pais_1, Area_em_km_1, Pais_2, Area_em_km_2);
                printf("--- Empate!! ---\n");
            }

            break;
        case 5:
            printf("---POR PONTOS TURISTICOS--- \n");
            if (N_pontos_turisticos_1 > N_pontos_turisticos_2)
            {
                printf("--- %s X %s --- \n", Pais_1, Pais_2);
                printf("--- Batalha no quesito Pontos Turisticos ---\n");
                printf("--> Pontos Turisticos %s: %d <-- X --> Pontos Turisticos %s: %d <-- \n", Pais_1, N_pontos_turisticos_1, Pais_2, N_pontos_turisticos_2);
                if (soma_pais1 > soma_pais2)
                {
                    printf("--- A soma do %s: %f\n", Pais_1, soma_pais1);
                    printf("--- A soma do %s: %f\n", Pais_2, soma_pais2);
                    printf("--- VENCEDOR : %s ---\n", Pais_1);
                }
                else
                {
                    printf("--- A soma do %s: %f\n", Pais_1, soma_pais1);
                    printf("--- A soma do %s: %f\n", Pais_2, soma_pais2);
                    printf("--- VENCEDOR: %s ---\n", Pais_2);
                }
            }
            else if (N_pontos_turisticos_1 < N_pontos_turisticos_2)
            {
                printf("--- %s X %s --- \n", Pais_1, Pais_2);
                printf("--- Batalha no quesito Pontos Turisticos ---\n");
                printf("--> Pontos Turisticos %s: %d <-- X --> Pontos Turisticos %s: %d <-- \n", Pais_1, N_pontos_turisticos_1, Pais_2, N_pontos_turisticos_2);
                if (soma_pais1 < soma_pais2)
                {
                    printf("--- A soma do %s: %f\n", Pais_1, soma_pais1);
                    printf("--- A soma do %s: %f\n", Pais_2, soma_pais2);
                    printf("--- VENCEDOR : %s ---\n", Pais_2);
                }
                else
                {
                    printf("--- A soma do %s: %f\n", Pais_1, soma_pais1);
                    printf("--- A soma do %s: %f\n", Pais_2, soma_pais2);
                    printf("--- VENCEDOR: %s ---\n", Pais_1);
                }
            }
            else
            {
                printf("--- %s X %s --- \n", Pais_1, Pais_2);
                printf("--- Batalha no quesito Pontos Turisticos ---\n");
                printf("--> Pontos Turisticos %s: %d <-- X --> Pontos Turisticos %s: %d <-- \n", Pais_1, N_pontos_turisticos_1, Pais_2, N_pontos_turisticos_2);
                printf("--- Empate!! ---");
            }

            break;

        default:
            break;
        }
    }
    else
    {
        printf("Voce escolheu o mesmo atributo, tente novamente");
    }

    return 0;
}