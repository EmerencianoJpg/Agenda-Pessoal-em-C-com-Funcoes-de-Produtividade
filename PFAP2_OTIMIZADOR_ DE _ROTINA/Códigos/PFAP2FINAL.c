#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
#include "PFAP2_H.h"

typedef struct atividades {

    char nome[100];
    char data[100]; 
    char hora[100]; 
    int duracao; 
    
} Atividade;

//Variáveis globais

Atividade listaAtividades[1000];

// função para ler os dados de uma nova atividade


void lerDadosAtividade(Atividade listaAtividades[], int *qtdAtividades ) {

    system("cls");

    printf("\t\t\t\t\t\t\t\t0----------------------------------------------------------------------------------------------0\n");

    printf("\t\t\t\t\t\t\t\t\t\t\t\tNome da atividade: ");
    fflush(stdin);
    scanf("%[^\n]", listaAtividades[*qtdAtividades].nome);

    printf("\t\t\t\t\t\t\t\t\t\t\t\tData (dd/mm/aaaa): ");
    fflush(stdin);
    scanf("%[^\n]", listaAtividades[*qtdAtividades].data);

    printf("\t\t\t\t\t\t\t\t\t\t\t\tHora (hh:mm): ");
    fflush(stdin);
    scanf("%[^\n]", listaAtividades[*qtdAtividades].hora);

    printf("\t\t\t\t\t\t\t\t\t\t\t\tDuração em minutos: ");
    fflush(stdin);
    scanf("%d", &listaAtividades[*qtdAtividades].duracao);

    (*qtdAtividades)++;
    
    printf("\t\t\t\t\t\t\t\t0----------------------------------------------------------------------------------------------0\n");

}

// função para imprimir todas as atividades cadastradas

void imprimirAtividades(int *qtdAtividades) {

    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t0-------------------------0\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t| Atividades cadastradas: |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t0-------------------------0\n\n");

    printf("\t\t\t\t\t\t\t\t\t0-----------------------------------------------------------------------------------------------------0\n");
    for (int i = 0; i < *qtdAtividades; i++) {
        
        printf("\n\t\t\t\t\t\t\t\t\t\t\t| Nome: %s, Data: %s, Hora: %s, Duração: %d minutos |\n\n",listaAtividades[i].nome,listaAtividades[i].data,listaAtividades[i].hora,listaAtividades[i].duracao);

    }
    printf("\t\t\t\t\t\t\t\t\t0-----------------------------------------------------------------------------------------------------0\n\n");

}

// função para buscar atividades por nome, data ou hora

void buscarAtividades(int *qtdAtividades) {

    char termoBusca[50];
    char dataBusca[11];
    char horaBusca[6];
    int buscaPorNome = 0, buscaPorData = 0, buscaPorHora = 0;
    
    printf("\t\t\t\t\t\t\t\t\t0-----------------------------------------------------------------------------------------------------0\n");

    printf("\t\t\t\t\t\t\t\t\t\t\t\tBuscar por nome (1 - sim, 0 - não)? ");
    scanf("%d", &buscaPorNome);

    if (buscaPorNome){
       
        printf("\t\t\t\t\t\t\t\t\t\t\t\tDigite o nome da atividade: ");
        fflush(stdin);
        scanf("%[^\n]", termoBusca);

    }

    printf("\t\t\t\t\t\t\t\t\t\t\t\tBuscar por data (1 - sim, 0 - não)? ");
    scanf("%d", &buscaPorData);

    if (buscaPorData) {

        printf("\t\t\t\t\t\t\t\t\t\t\t\tDigite a data de busca (dd/mm/aaaa): ");
        fflush(stdin);
        scanf("%[^\n]", dataBusca);

    }

    printf("\t\t\t\t\t\t\t\t\t\t\t\tBuscar por hora (1 - sim, 0 - não)? ");
    scanf("%d", &buscaPorHora);

    if (buscaPorHora) {

        printf("\t\t\t\t\t\t\t\t\t\t\t\tDigite a hora de busca (hh:mm): ");
        fflush(stdin);
        scanf("%[^\n]", horaBusca);

    }
    printf("\t\t\t\t\t\t\t\t\t0-----------------------------------------------------------------------------------------------------0\n\n");

    system("cls");

    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t   0---------------------0\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t   | resx , x; DA BUSCA: |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t   0---------------------0\n");

    printf("\t\t\t\t\t\t\t\t\t0-----------------------------------------------------------------------------------------------------0\n");

    for (int i = 0; i < *qtdAtividades; i++){

        if((buscaPorNome && strstr(listaAtividades[i].nome, termoBusca))|| (buscaPorData && strcmp(listaAtividades[i].data, dataBusca) == 0) || (buscaPorHora && strcmp(listaAtividades[i].hora, horaBusca) == 0)){

        printf("\n\t\t\t\t\t\t\t\t\t\t\t| Nome: %s, Data: %s, Hora: %s, Duração: %d minutos |\n\n",listaAtividades[i].nome,listaAtividades[i].data,listaAtividades[i].hora,listaAtividades[i].duracao);

        }

    }
    printf("\t\t\t\t\t\t\t\t\t0-----------------------------------------------------------------------------------------------------0\n");

}

// função para salvar as atividades em um arquivo

void salvarAtividades(int *qtdAtividades) {

    FILE *arquivo = fopen("atividades_agenda.txt", "w");

    if (arquivo != NULL){

        for (int i = 0; i < *qtdAtividades; i++) {

        fprintf(arquivo, "%s;%s;%s;%d\n",listaAtividades[i].nome,listaAtividades[i].data,listaAtividades[i].hora,listaAtividades[i].duracao);

        }

    fclose(arquivo);

    }

}

// função para carregar as atividades a partir de um arquivo

void carregarAtividades(int *qtdAtividades){

    FILE *arquivo = fopen("atividades_agenda.txt", "r");

    if (arquivo != NULL){
        
        char linha[100];
        char *token;

        while (fgets(linha, 100, arquivo) != NULL){

        token = strtok(linha, ";");

        strcpy(listaAtividades[*qtdAtividades].nome, token);

        token = strtok(NULL, ";");

                strcpy(listaAtividades[*qtdAtividades].data, token);

                token = strtok(NULL, ";");

                strcpy(listaAtividades[*qtdAtividades].hora, token);

                token = strtok(NULL, "\n");

                listaAtividades[*qtdAtividades].duracao = atoi(token);

                (*qtdAtividades)++;

        }

        fclose(arquivo);

    }

}

int main() {

    setlocale(LC_ALL,"portuguese");

    int qtdAtividades = 0;

    carregarAtividades(&qtdAtividades);

    system("color 06");

    int opcao;

    float resx , x;
    float n, resn;

    do {

    printf("\t\t\t\t\t\t\t\t\t\t\t\t0--------------------------------------------0\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t| BEM VINDO AO MENU PRINCIPAL DA SUA AGENDA! |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t|        QUAL OPÇÃO DESEJA ULTILIZAR ?       |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t0--------------------------------------------0\n\n");

    printf("\t\t\t\t\t\t\t\t\t\t\t\t0-------------------------------------------0\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t| 1. Cadastrar nova atividade               |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t| 2. Listar todas as atividades cadastradas |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t| 3. Buscar atividades                      |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t| 4. Relatório rotina                       |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t| 5. Teste represnentacional                |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t| 0. Sair                                   |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t0-------------------------------------------0\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\tEscolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao) {

        case 1:

            if (qtdAtividades >= 1000) {
            
                system("cls");

                printf("Limite máximo de atividades atingido (%d).\n", 1000);

            }

            else{
            
                lerDadosAtividade(listaAtividades,&qtdAtividades);

                system("cls");

                salvarAtividades(&qtdAtividades);
                printf("\t\t\t\t\t\t\t\t\t\t\t\t     0----------------------------------0\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t     | ATIVIDADE CADASTRADA COM SUCESSO |\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t     0----------------------------------0\n\n");

            }

        break;

        case 2:

            if (qtdAtividades == 0){

                system("cls");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t     0------------------------------0\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t     | NENHUMA ATIVIDADE CADASTRADA |\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t     0------------------------------0\n\n");

            } 
            
            else{

                system("cls");

                imprimirAtividades(&qtdAtividades);

            }

        break;

        case 3:

            if (qtdAtividades == 0){

                system("cls");

                printf("\t\t\t\t\t\t\t\t\t\t\t\t     0------------------------------0\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t     | NENHUMA ATIVIDADE CADASTRADA |\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t     0------------------------------0\n\n");


            } 
            
            else{
    
                system("cls");

                buscarAtividades(&qtdAtividades);

            }

        break;

        case 4:

            system("cls");

            ROT_REL();

        break;

        case 5:

            system("cls");

            TEST_REP();

        break;

        case 11235:

            system("color 8f");
            system("cls");
            scanf("%f", &n);
            resn = fibonacci(n);
            printf("O %0.0fº termo de fibonacci é %0.0f\n",n,resn);


        break;

        case 720:

            system("color 09");
            system("cls");
            scanf("%f",&x);
            resx = fatorial(x);
            printf("O fatorial de %0.0f é: %0.0f\n", x, resx);

        break;

        case 0:

            system("cls");

                printf("\t\t\t\t\t\t\t\t\t\t\t\t     0-----------------------0\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t     | ENCERRANDO O PROGRAMA |\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t     0-----------------------0\n\n");

        break;

        default:

            system("cls");

            printf("Opção inválida.\n");

        break;
    
    }

    } while (opcao != 0);

    return 0;
    
}