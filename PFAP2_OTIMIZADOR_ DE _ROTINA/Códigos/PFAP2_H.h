#ifndef PFAP2_H_H
#define PFAP2_H_H
#include <locale.h>

void TEST_REP(){

    setlocale(LC_ALL,"portuguese");

    int cin, vis, aud, dig, LER;
    int nota[20];

    setlocale(LC_ALL, "Portuguese");

    system("cls");

    printf("\t\t\t\t\t\t\t\t\t\t\t  0------------------------------------------0\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t  | Responda com:                            |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t  | 4 - Op��o que melhor te descreve         |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t  | 3 - Segunda melhor op��o que te descreva |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t  | 2 - Pr�xima op��o que te descreve        |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t  | 1 - A que menos te descreve              |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t  0------------------------------------------0\n\n");

    printf("\t\t\t\t\t\t\t\t\t\t\t0-----------------------------------------------0\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| 1) Eu tomo decis�es importantes baseado em:   |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| 1 - Intui��o:                                 |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| 2 - O que me soa melhor:                      |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| 3 - O que me parece melhor:                   |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| 4 - Um estudo preciso e minucioso do assunto: |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t0-----------------------------------------------0\n\n");


    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t1 - ");
    scanf("%d", &nota[0]);

    while((nota[0]!=1)&&(nota[0]!=2)&&(nota[0]!=3)&&(nota[0]!=4)){

        printf("\n\t\t\t\t\t\t\t\t\t\t\t\tVALOR ATRIBU�DO INV�LIDO\n\t\t\t\t\t\t\t\t\t\t\t\tINSIRA VALOR V�LIDO (1, 2, 3 ou 4)->");
        scanf("%d", &nota[0]);

    };

    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t2 - ");
    scanf("%d", &nota[1]);

    while((nota[1]!=1)&&(nota[1]!=2)&&(nota[1]!=3)&&(nota[1]!=4)){

        printf("\n\t\t\t\t\t\t\t\t\t\t\t\tVALOR ATRIBU�DO INV�LIDO\n\t\t\t\t\t\t\t\t\t\t\t\tINSIRA VALOR V�LIDO (1, 2, 3 ou 4)->");
        scanf("%d", &nota[1]);

    };

    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t3 - ");
    scanf("%d", &nota[2]);

    while((nota[2]!=1)&&(nota[2]!=2)&&(nota[2]!=3)&&(nota[2]!=4)){

        printf("\n\t\t\t\t\t\t\t\t\t\t\t\tVALOR ATRIBU�DO INV�LIDO\n\t\t\t\t\t\t\t\t\t\t\t\tINSIRA VALOR V�LIDO (1, 2, 3 ou 4)->");
        scanf("%d", &nota[2]);

    };

    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t4 - ");
    scanf("%d", &nota[3]);

    while((nota[3]!=1)&&(nota[3]!=2)&&(nota[3]!=3)&&(nota[3]!=4)){

        printf("\n\t\t\t\t\t\t\t\t\t\t\t\tVALOR ATRIBU�DO INV�LIDO\n\t\t\t\t\t\t\t\t\t\t\t\tINSIRA VALOR V�LIDO (1, 2, 3 ou 4)->");
        scanf("%d", &nota[3]);

    };

    system("cls");
    printf("\t\t\t\t\t\t\t\t\t\t\t0----------------------------------------------------------------------0\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| 2) Durante uma discuss�o eu sou mais influenciado por:               |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| 1 - Tom de voz da outra pessoa:                                      |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| 2 - Se eu posso ou n�o ver o argumento da outra pessoa:              |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| 3 - Se eu entro em contato ou n�o com os sentimentos reais do outro: |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| 4 - A l�gica do argumento da outra pessoa:                           |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t0----------------------------------------------------------------------0\n\n");

    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t1 - ");
    scanf("%d", &nota[4]);

    while((nota[4]!=1)&&(nota[4]!=2)&&(nota[4]!=3)&&(nota[4]!=4)){

        printf("\n\t\t\t\t\t\t\t\t\t\t\t\tVALOR ATRIBU�DO INV�LIDO\n\t\t\t\t\t\t\t\t\t\t\t\tINSIRA VALOR V�LIDO (1, 2, 3 ou 4)->");
        scanf("%d", &nota[4]);

    };

    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t2 - ");
    scanf("%d", &nota[5]);

    while((nota[5]!=1)&&(nota[5]!=2)&&(nota[5]!=3)&&(nota[5]!=4)){

        printf("\n\t\t\t\t\t\t\t\t\t\t\t\tVALOR ATRIBU�DO INV�LIDO\n\t\t\t\t\t\t\t\t\t\t\t\tINSIRA VALOR V�LIDO (1, 2, 3 ou 4)->");
        scanf("%d", &nota[5]);

    };

    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t3 - ");
    scanf("%d", &nota[6]);

    while((nota[6]!=1)&&(nota[6]!=2)&&(nota[6]!=3)&&(nota[6]!=4)){

        printf("\n\t\t\t\t\t\t\t\t\t\t\t\tVALOR ATRIBU�DO INV�LIDO\n\t\t\t\t\t\t\t\t\t\t\t\tINSIRA VALOR V�LIDO (1, 2, 3 ou 4)->");
        scanf("%d", &nota[6]);

    };

    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t4 - ");
    scanf("%d", &nota[7]);

    while((nota[7]!=1)&&(nota[7]!=2)&&(nota[7]!=3)&&(nota[7]!=4)){

        printf("\n\t\t\t\t\t\t\t\t\t\t\t\tVALOR ATRIBU�DO INV�LIDO\n\t\t\t\t\t\t\t\t\t\t\t\tINSIRA VALOR V�LIDO (1, 2, 3 ou 4)->");
        scanf("%d", &nota[7]);

    };

    system("cls");

    printf("\t\t\t\t\t\t\t\t\t\t\t0-------------------------------------------------------0\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| 3) Eu comunico mais facilmente o que se passa comigo: |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| 1 - Do modo como me visto e aparento:                 |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| 2 - Pelos sentimentos que compartilho:                |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| 3 - Pelas palavras que escolho:                       |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| 4 - Pelo tom da minha voz:                            |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t0-------------------------------------------------------0\n\n");


    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t1 - ");
    scanf("%d", &nota[8]);

    while((nota[8]!=1)&&(nota[8]!=2)&&(nota[8]!=3)&&(nota[8]!=4)){

        printf("\n\t\t\t\t\t\t\t\t\t\t\t\tVALOR ATRIBU�DO INV�LIDO\n\t\t\t\t\t\t\t\t\t\t\t\tINSIRA VALOR V�LIDO (1, 2, 3 ou 4)->");
        scanf("%d", &nota[8]);

    };

    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t2 - ");
    scanf("%d", &nota[9]);

    while((nota[9]!=1)&&(nota[9]!=2)&&(nota[9]!=3)&&(nota[9]!=4)){

        printf("\n\t\t\t\t\t\t\t\t\t\t\t\tVALOR ATRIBU�DO INV�LIDO\n\t\t\t\t\t\t\t\t\t\t\t\tINSIRA VALOR V�LIDO (1, 2, 3 ou 4)->");
        scanf("%d", &nota[9]);

    };

    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t3 - ");
    scanf("%d", &nota[10]);

    while((nota[10]!=1)&&(nota[10]!=2)&&(nota[10]!=3)&&(nota[10]!=4)){

        printf("\n\t\t\t\t\t\t\t\t\t\t\t\tVALOR ATRIBU�DO INV�LIDO\n\t\t\t\t\t\t\t\t\t\t\t\tINSIRA VALOR V�LIDO (1, 2, 3 ou 4)->");
        scanf("%d", &nota[10]);

    };

    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t4 - ");
    scanf("%d", &nota[11]);

    while((nota[11]!=1)&&(nota[11]!=2)&&(nota[11]!=3)&&(nota[11]!=4)){

        printf("\n\t\t\t\t\t\t\t\t\t\t\t\tVALOR ATRIBU�DO INV�LIDO\n\t\t\t\t\t\t\t\t\t\t\t\tINSIRA VALOR V�LIDO (1, 2, 3 ou 4)->");
        scanf("%d", &nota[11]);

    };

    system("cls");

    printf("\t\t\t\t\t\t\t\t\t\t\t0---------------------------------------------------------------------------0\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| 4) � muito f�cil pra mim:                                                 |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| 1 - Achar o volume e a sintonia ideais num sistema de som:                |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| 2 - Selecionar o ponto mais relevante relativo a um assunto interessante: |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| 3 - Escolher os m�veis mais confort?veis:                                 |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| 4 - Escolher as combina��es de cores mais ricas e atraentes:              |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t0---------------------------------------------------------------------------0\n\n");

    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t1 - ");
    scanf("%d", &nota[12]);

    while((nota[12]!=1)&&(nota[12]!=2)&&(nota[12]!=3)&&(nota[12]!=4)){

        printf("\n\t\t\t\t\t\t\t\t\t\t\t\tVALOR ATRIBU�DO INV�LIDO\n\t\t\t\t\t\t\t\t\t\t\t\tINSIRA VALOR V�LIDO (1, 2, 3 ou 4)->");
        scanf("%d", &nota[12]);

    };

    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t2 - ");
    scanf("%d", &nota[13]);

    while((nota[13]!=1)&&(nota[13]!=2)&&(nota[13]!=3)&&(nota[13]!=4)){

        printf("\n\t\t\t\t\t\t\t\t\t\t\t\tVALOR ATRIBU�DO INV�LIDO\n\t\t\t\t\t\t\t\t\t\t\t\tINSIRA VALOR V�LIDO (1, 2, 3 ou 4)->");
        scanf("%d", &nota[13]);

    };

    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t3 - ");
    scanf("%d", &nota[14]);

    while((nota[14]!=1)&&(nota[14]!=2)&&(nota[14]!=3)&&(nota[14]!=4)){

        printf("\n\t\t\t\t\t\t\t\t\t\t\t\tVALOR ATRIBU�DO INV�LIDO\n\t\t\t\t\t\t\t\t\t\t\t\tINSIRA VALOR V�LIDO (1, 2, 3 ou 4)->");
        scanf("%d", &nota[14]);

    };

    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t4 - ");
    scanf("%d", &nota[15]);

    while((nota[15]!=1)&&(nota[15]!=2)&&(nota[15]!=3)&&(nota[15]!=4)){

        printf("\n\t\t\t\t\t\t\t\t\t\t\t\tVALOR ATRIBU�DO INV�LIDO\n\t\t\t\t\t\t\t\t\t\t\t\tINSIRA VALOR V�LIDO (1, 2, 3 ou 4)->");
        scanf("%d", &nota[15]);

    };

    system("cls");

    printf("\t\t\t\t\t\t\t\t\t\t\t0-------------------------------------------------------------------------0\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| 5) Eu me percebo assim:                                                 |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| 1 - Se estou muito em sintonia com os sons do ambiente:                 |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| 2 - Eu sou muito capaz de raciocinar com fatos e dados novos:           |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| 3 - Eu sou muito sens�vel com a maneira que a roupa veste o meu corpo:  |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| 4 - Eu responto fortemente �s cores e � apar�ncia de uma sala:          |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t0-------------------------------------------------------------------------0\n");

    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t1 - ");
    scanf("%d", &nota[16]);

    while((nota[16]!=1)&&(nota[16]!=2)&&(nota[16]!=3)&&(nota[16]!=4)){

        printf("\n\t\t\t\t\t\t\t\t\t\t\t\tVALOR ATRIBU�DO INV�LIDO\n\t\t\t\t\t\t\t\t\t\t\t\tINSIRA VALOR V�LIDO (1, 2, 3 ou 4)->");
        scanf("%d", &nota[16]);

    };

    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t2 - ");
    scanf("%d", &nota[17]);

    while((nota[17]!=1)&&(nota[17]!=2)&&(nota[17]!=3)&&(nota[17]!=4)){

        printf("\n\t\t\t\t\t\t\t\t\t\t\t\tVALOR ATRIBU�DO INV�LIDO\n\t\t\t\t\t\t\t\t\t\t\t\tINSIRA VALOR V�LIDO (1, 2, 3 ou 4)->");
        scanf("%d", &nota[17]);

    };

    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t3 - ");
    scanf("%d", &nota[18]);

    while((nota[18]!=1)&&(nota[18]!=2)&&(nota[18]!=3)&&(nota[18]!=4)){

        printf("\n\t\t\t\t\t\t\t\t\t\t\t\tVALOR ATRIBU�DO INV�LIDO\n\t\t\t\t\t\t\t\t\t\t\t\tINSIRA VALOR V�LIDO (1, 2, 3 ou 4)->");
        scanf("%d", &nota[18]);

    };

    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t4 - ");
    scanf("%d", &nota[19]);

    while((nota[19]!=1)&&(nota[19]!=2)&&(nota[19]!=3)&&(nota[19]!=4)){

        printf("\n\t\t\t\t\t\t\t\t\t\t\t\tVALOR ATRIBU�DO INV�LIDO\n\t\t\t\t\t\t\t\t\t\t\t\tINSIRA VALOR V�LIDO (1, 2, 3 ou 4)->");
        scanf("%d", &nota[19]);

    };

    cin = (nota[0]+nota[7]+nota[9]+nota[14]+nota[18])*2;
    aud = (nota[1]+nota[4]+nota[11]+nota[12]+nota[16])*2;
    vis = (nota[2]+nota[5]+nota[8]+nota[15]+nota[19])*2;
    dig = (nota[3]+nota[6]+nota[10]+nota[13]+nota[17])*2;

    system("cls");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t0------------------------------0\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t| O TESTE INDICOU QUE VOC� �:  |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t| %d%% CINEST�SICO              |\n",cin);
    printf("\t\t\t\t\t\t\t\t\t\t\t\t| %d%% AUDITIVO                 |\n",aud);
    printf("\t\t\t\t\t\t\t\t\t\t\t\t| %d%% VISUAL                   |\n",vis);
    printf("\t\t\t\t\t\t\t\t\t\t\t\t| %d%% DIGITAL                  |\n",dig);
    printf("\t\t\t\t\t\t\t\t\t\t\t\t0------------------------------0\n\n");

    do{
        printf("\t\t\t\t\t\t\t\t\t\t\t0----------------------------------------------0\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| Deseja ler sobre alguma das caracteristicas? |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| 1: VISUAL                                    |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| 2: CINEST�SICO                               |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| 3: AUDITIVO                                  |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| 4: DIGITAL                                   |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| 5: SAIR                                      |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t0----------------------------------------------0\n");
        printf("\t\t\t\t\t\t\t\t\t\t\tDigite: ");
        scanf("%d",&LER);

        switch (LER){
        case(1):

            system("color 05");

            system("cls");
            printf("\t\t\t\t0=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=0\n");
            printf("\t\t\t\t| O que significa ser VISUAL ?                                                                                                                                                              |\n");
            printf("\t\t\t\t|                                                                                                                                                                                           |\n");
            printf("\t\t\t\t|   A pessoa com predomin�ncia do canal VISUAL � ligada na beleza e est�tica, em formas e detalhes. Tem uma postura corporal r�gida e sua respira��o � tor�cica.                            |\n");
            printf("\t\t\t\t| Ela fala muito rapidamente porque as imagens se sucedem em sua mente como um filme. Entre o pr�tico e o bonito, a pessoa VISUAL sempre escolher� o bonito. � uma                          |\n");
            printf("\t\t\t\t| pessoa que preza por arruma��o e ordem e para atender o que lhe dizem, a pessoa VISUAL precisa que ""mostrem"" o que �, n�o d� tanto valor �s palavras e nem sempre                       |\n");
            printf("\t\t\t\t| reage bem ao toque, ao contr�rio da pessoa Cinest�sica.                                                                                                                                   |\n");
            printf("\t\t\t\t|   A pessoa em que predomina o modelo visual � mais r�pida, ansiosa, agitada e impulsiva. Quanto mais visual, mais � mandona, franca e sincera.                                            |\n");
            printf("\t\t\t\t| Bons chefes, gerentes e gestores, em geral, s�o visuais. Outros elementos importantes s�o a capacidade de desempenhar v�rias tarefas ao mesmo tempo, gostar de prazos apertados, implantar|\n");
            printf("\t\t\t\t| projetos e cumprir metas. S�o pessoas que costumam projetar o futuro, prestam aten��o aos detalhes, gostam de organiza��o e harmonia, sua aprendizagem �                                  |\n");
            printf("\t\t\t\t| estimulada por meios de imagens, cores, formatos e luzes                                                                                                                                  |\n");
            printf("\t\t\t\t|=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
            printf("\t\t\t\t| T�cnicas de estudo e assimila��o para pessoas VISUAIS:                                                                                                                                    |\n");
            printf("\t\t\t\t| Sublinhar, usar diferentes cores, marcadores, fluxogramas, desenhos, p�steres, slides, palestrantes que gesticulam e utilizam linguagem c�nica, pict�rica, livros,                        |\n");
            printf("\t\t\t\t| texto com diagramas e figuras, gr�ficos, s�mbolos.                                                                                                                                        |\n");
            printf("\t\t\t\t0=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=0\n\n");

        break;


        case(2):

            system("color 0F");

            system("cls");
            printf("\t\t\t\t\t0======================================================================================================================================================================0\n");
            printf("\t\t\t\t\t| O que significa ser CINEST�SICO ?                                                                                                                                    |\n");
            printf("\t\t\t\t\t|                                                                                                                                                                      |\n");
            printf("\t\t\t\t\t|     S�o as pessoas que gostam de tocar e sentir as coisas do mundo. Sensa��es e sentimentos s�o palavras chave de suas decis�es. Seu processo de aprendizagem �      |\n");
            printf("\t\t\t\t\t| r�pido ao se envolverem com o conte�do e s�o expostas a est�mulos pr�ticos de execu��o de experimentos e intera��o em grupo.                                         |\n");
            printf("\t\t\t\t\t| A pessoa com predomin�ncia do canal CINEST�SICO dos 3 tipos, o mais sujeito ao sofrimento. Para esta pessoa todas as experi�ncias s�o f�sicas.                       |\n");
            printf("\t\t\t\t\t|     Esta pessoa prefere conforto a beleza e busca sempre o bem-estar, o prazer e o aconchego. Este tipo de pessoa precisa ser abra�aada, tocada, beijada             |\n");
            printf("\t\t\t\t\t| para que se sinta amada. Ela prefere roupas velhas e confort�veis, sapatos que n�o apertam, nadar, pisar na areia, estar junto da natureza.                          |\n");
            printf("\t\t\t\t\t| As pessoas CINEST�SICAS possuem o tom de voz baixo, ritmo lento e respira��o abdominal. Gostam de m�sicas lentas e baladas e se                                      |\n");
            printf("\t\t\t\t\t| sentem agredidas quando n�o s�o correspondidas em sua necessidade de contato corporal. � socialmente orientado. Gosta de gente, de falar,                            |\n");
            printf("\t\t\t\t\t| de aparecer; adora eventos, festas e oportunidades para comunica��o. A desordem reina, mas a criatividade � solta. � extrovertido                                    |\n");
            printf("\t\t\t\t\t| e precisa trabalhar em equipe. Gosta de correr riscos, prefere trabalhar na rua ou em fun��es que exijam contato com pessoas ou express�o verbal de ideias.          |\n");
            printf("\t\t\t\t\t|======================================================================================================================================================================|\n");
            printf("\t\t\t\t\t| T�cnicas de estudo e assimila��o para pessoas CINEST�SICAS:                                                                                                          |\n");
            printf("\t\t\t\t\t| Todos os seus sentidos - vis�o, tato, paladar, olfato, audi��o, laborat�rios, viagens de campo, passeios de campo/excurs�es, exemplos de princ�pios                  |\n");
            printf("\t\t\t\t\t| Palestras que d�o exemplos da vida real, aplica��es, abordagens m�o na massa, (inform�tica), tentativa e erro, cole��es de tipos de pedras, plantas, conchas, grama  |\n");
            printf("\t\t\t\t\t| Exibi��es, amostras, fotografias, receitas - solu��es para problemas, folhas de provas antigas.                                                                      |\n");
            printf("\t\t\t\t\t0======================================================================================================================================================================0\n\n");

        break;

        case(3):

            system("color 04");

            system("cls");
            printf("\t\t\t\t0--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------0\n");
            printf("\t\t\t\t| O que significa ser AUDITIVO ?                                                                                                                                                       |\n");
            printf("\t\t\t\t|                                                                                                                                                                                      |\n");
            printf("\t\t\t\t|   A pessoa com predomin�ncia AUDITIVA, n�o d� grande valor �s apar�ncias, mas sim ao bom papo, bom senso e intelig�ncia. S�o equilibradas e est�o sempre prontas                     |\n");
            printf("\t\t\t\t| para discutir os problemas pois acreditam na l�gica dos argumentos. O tom da voz � m�dio, a respira��o � tor�cica e abdominal.                                                       |\n");
            printf("\t\t\t\t| A mem�ria para os sons � fant�stica: s�o capazes de lembrar-se de coisas que lhes foram ditas h� muitos anos atr�s.                                                                  |\n");
            printf("\t\t\t\t| O barulho, vozes estridentes ou �speras ferem as pessoas auditivas. Apreciam m�sicas com letras bem elaboradas, que passam uma mensagem consistente.                                 |\n");
            printf("\t\t\t\t| Para ter certeza de alguma coisa, o auditivo precisa ouvir, do contr�rio, n�o acreditar�.                                                                                            |\n");
            printf("\t\t\t\t|   Consegue se concentrar e guardar informa��es apenas ouvindo-as, gosta de m�sica e de falar ao telefone, com pensamento l�gico e pr�tico, � uma pessoa que busca a��o e pioneirismo |\n");
            printf("\t\t\t\t| � uma pessoa mais calma, tranquila, ponderada; prefere ouvir do que falar; � detalhista, organizada, t�mida e perfeccionista. Prefere o previs�vel e a rotina.                       |\n");
            printf("\t\t\t\t| � mais focada em tarefas e processos do que em gente, ilustra. � r�gido e formal. Gosta de tabelas, gr�ficos, concentra��o; � algu�m que n�o se importa de                           |\n");
            printf("\t\t\t\t| ter de refazer v�rias vezes as mesmas coisas, contanto que estejam corretas. Para um auditivo, trabalhar com an�lises e c�lculos � um prazer                                         |\n");
            printf("\t\t\t\t|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|\n");
            printf("\t\t\t\t| T�cnicas de estudo e assimila��o para pessoas AUDITIVAS:                                                                                                                             |\n");
            printf("\t\t\t\t| Participe das aulas, Participe das discuss�es e tutoriais, Discuta t�picos com outras pessoas, Discuta t�picos com seus professores, Explique novas ideias para outras pessoas       |\n");
            printf("\t\t\t\t| Utilize um gravador, Lembre-se dos exemplos interessantes, hist�rias, piadas, Descreva os t�tulos, figuras e outros aspectos visuais para algu�m que n�o estava l�                   |\n");
            printf("\t\t\t\t| Deixe espa�os em suas anota��es para um repasse posterior ou preenchimento?                                                                                                          |\n");
            printf("\t\t\t\t0--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------0\n\n");

        break;

        case(4):

            system("color 02");

            system("cls");
            printf("\t0################################################################################################################################################################################################################################0\n");
            printf("\t| O que significa ser DIGITAL ?                                                                                                                                                                                                  |\n");
            printf("\t|                                                                                                                                                                                                                                |\n");
            printf("\t|     Voc� j� percebeu que na sua cabe�a tem uma voz que conversa com voc�? Essa voz �s vezes aparece pra fazer perguntas ou criticar algumas coisas.                                                                            |\n");
            printf("\t| Mas, tamb�m para responder e entender o porqu� das coisas. A pessoa digital � a pessoa que convive com essa voz com mais �nfase.                                                                                               |\n");
            printf("\t| Vive conversando com ela mesma. At� quando conversa com outra pessoa, ela conversa ao mesmo tempo com ela mesma, na mente dela.                                                                                                |\n");
            printf("\t| Lembrando tem duas maneiras de aprender as coisas: atrav�s de fatores externos e internos. Ent�o, a digital tem mais facilidade de aprender internamente.                                                                      |\n");
            printf("\t|     Ela com ela mesma. Tipo uma fil�sofa. � inteligent�ssima, desconfiada, cr�tica, curiosa e observadora. Precisa entender dos detalhes de tudo.                                                                              |\n");
            printf("\t| Ent�o, costuma fazer muitas perguntas. Quando ela ouve uma hist�ria, quer entender os detalhes e analisar para ver se faz sentido.                                                                                             |\n");
            printf("\t| Quando ela conta a hist�ria, comenta sobre o porque de todas as coisas que est�o acontecendo. O lado ruim � que se ela n�o souber lidar com isso, vai acabar se estressando                                                    |\n");
            printf("\t| muito e tamb�m estressando os outros. Porque ningu�m aguenta uma pessoa que fica enchendo o saco com todo tipo de pergunta n�. Os pensamentos em sua mente a atrapalham em manter o foco.                                      |\n");
            printf("\t|################################################################################################################################################################################################################################|\n");
            printf("\t| T�cnicas de estudo e assimila��o para pessoas DIGITAIS:                                                                                                                                                                        |\n");
            printf("\t| Leia bastante conte�do e reflita sobre. Se esforce at� tudo fazer sentido pra voc�. Se esforce para ficar calmo e tranquilo. Pratique a medita��o.                                                                             |\n");
            printf("\t| N�o seja multitarefas, fa�a uma coisa de cada vez. Se concentre. Organize seus pensamentos. Pode ser que muita coisa que passa pela sua cabe�a, n�o seja relevante. Ent�o, tente analisar se seus pensamentos s�o importantes. |\n");
            printf("\t| Resolva exerc�cios (quest�es de provas mesmo) relacionados ao tema que quer aprender.                                                                                                                                          |\n");
            printf("\t0################################################################################################################################################################################################################################0\n\n");

        break;

        case(5):

            system("cls");

            LER=5;

            system("color 06");


        break;

        default:

            system("cls");

            printf("\t\t\t\t\t\t\t\t\t\t\t\tENTRADA INV�LIDA! DIGITE NOVAMENTE:\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t0----------------------------------------------0\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t| Deseja ler sobre alguma das caracter�sticas? |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t| 1: VISUAL                                    |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t| 2: CINEST�SICO                               |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t| 3: AUDITIVO                                  |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t| 4: DIGITAL                                   |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t| 5: SAIR                                      |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t0----------------------------------------------0\n");
        printf("\t\t\t\t\t\t\t\t\t\t\tDigite: ");
        scanf("%d",&LER);

        break;

        }


    }while(LER!=5);

}

void ROT_REL(){

    int soma[4], r[10];
    char atv[50],atv2[50];

    setlocale(LC_ALL, "Portuguese");

    system("cls");
    printf("\t\t\t\t\t0------------------------------------------------------------------------------------------------------------------------------------------------------0\n");
    printf("\t\t\t\t\t| Ol�, seja bem-vindo(a) ao question�rio de perfil de produtividade da nossa agenda. Ele o ajudar� a tra�ar um perfil produtivo e otimizar� sua rotina!| \n");
    printf("\t\t\t\t\t0------------------------------------------------------------------------------------------------------------------------------------------------------0\n\n");

    //printf("Ser?o x perguntas\n\n");

    printf("\t\t\t\t\t\t\t\t\t\t\t\tPOR FAVOR, RESPONDA\n\n");

    printf("\t\t\t\t\t\t\t\t\t\t\t0-----------------------------0\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| Em qual destes voc� dorme?  |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| 1- Madrugada(00h a 06h)     |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| 2- Manh�(06h �s 12h)        |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| 3- Tarde(12h at� 18h)       |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| 4- Noite(18h at� 00h)       |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t0-----------------------------0\n");
    printf("\t\t\t\t\t\t\t\t\t\t\tDigite: ");
    scanf("%d", &r[0]);

    while((r[0]!=1)&&(r[0]!=2)&&(r[0]!=3)&&(r[0]!=4)){

        printf("\t\t\t\t\t\t\t\t\t\t\t0-------------------------------------0\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t|      Valor atribu�do inv�lido       |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| INSIRA VALOR V�LIDO (1, 2, 3 ou 4): |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t0-------------------------------------0\n");
        printf("\t\t\t\t\t\t\t\t\t\t\tDigite: ");
        scanf("%d", &r[0]);

    };

    if(r[0] == 1){

        soma[0] = 0;
        soma[1] = 5;
        soma[2] = 5;
        soma[3] = 5;
    }

    if(r[0] == 2){

        soma[0] = 5;
        soma[1] = 0;
        soma[2] = 5;
        soma[3] = 5;
    }

    if(r[0] == 3){

        soma[0] = 5;
        soma[1] = 5;
        soma[2] = 0;
        soma[3] = 5;
    }

    if(r[0] == 4){

        soma[0] = 5;
        soma[1] = 5;
        soma[2] = 5;
        soma[3] = 0;
    }

    system("cls");

    printf("\t\t\t\t\t\t\t\t\t\t\t0---------------------------------------------------------0\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| Qual dos perfis a seguir mais te representa no momento? |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| 1-Estuda e trabalha                                     |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| 2-Somente estuda                                        |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| 3-Somente trabalha                                      |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| 4-Nenhuma das op��es anteriores                         |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t0---------------------------------------------------------0\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\tDigite: ");
    scanf("%d", &r[9]);

    while((r[0]!=1)&&(r[9]!=2)&&(r[9]!=3)&&(r[9]!=4)){

        printf("\t\t\t\t\t\t\t\t\t\t\t0-------------------------------------0\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t|      Valor atribu�do inv�lido       |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| INSIRA VALOR V�LIDO (1, 2, 3 ou 4): |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t0-------------------------------------0\n");
        printf("\t\t\t\t\t\t\t\t\t\t\tDigite: ");
        scanf("%d", &r[9]);

    };

    if(r[9] == 1)
    {
        system("cls");

        printf("\t\t\t\t\t\t\t\t\t\t\t0---------------------------------------------------------0\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| Em qual hor�rio voc� costuma estudar?                   |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| 1- Madrugada(00h a 06h)                                 |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| 2- Manh�(06h �s 12h)                                    |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| 3- Tarde(12h at� 18h)                                   |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| 4- Noite(18h at� 00h)                                   |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t0---------------------------------------------------------0\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t\tDigite: ");
        scanf("%d", &r[1]);

        while((r[1]!=1)&&(r[1]!=2)&&(r[1]!=3)&&(r[1]!=4)){

        printf("\t\t\t\t\t\t\t\t\t\t\t0-------------------------------------0\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t|      Valor atribu�do inv�lido       |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| INSIRA VALOR V�LIDO (1, 2, 3 ou 4): |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t0-------------------------------------0\n");
        printf("\t\t\t\t\t\t\t\t\t\t\tDigite: ");
            scanf("%d", &r[1]);

        };

        if(r[1]==1){

            soma[0] = soma[0] + 0;
            soma[1] = soma[1] + 5;
            soma[2] = soma[2] + 5;
            soma[3] = soma[3] + 5;

        }

        if(r[1]==2){

            soma[0] = soma[0] + 5;
            soma[1] = soma[1] + 0;
            soma[2] = soma[2] + 5;
            soma[3] = soma[3] + 5;

        }

        if(r[1]==3){

            soma[0] = soma[0] + 5;
            soma[1] = soma[1] + 5;
            soma[2] = soma[2] + 0;
            soma[3] = soma[3] + 5;

        }

        if(r[1]==4){

            soma[0] = soma[0] + 5;
            soma[1] = soma[1] + 5;
            soma[2] = soma[2] + 5;
            soma[3] = soma[3] + 0;

        }

        system("cls");

        printf("\t\t\t\t\t\t\t\t\t\t\t0---------------------------------------------------------0\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| Em qual hor�rio voc� trabalha?                          |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| 1- Madrugada(00h a 06h)                                 |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| 2- Manh�(06h �s 12h)                                    |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| 3- Tarde(12h at� 18h)                                   |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| 4- Noite(18h at� 00h)                                   |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t0---------------------------------------------------------0\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t\tDigite: ");
        scanf("%d", &r[2]);

        while((r[2]!=1)&&(r[2]!=2)&&(r[2]!=3)&&(r[2]!=4)){

        printf("\t\t\t\t\t\t\t\t\t\t\t0-------------------------------------0\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t|      Valor atribu�do inv�lido       |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| INSIRA VALOR V�LIDO (1, 2, 3 ou 4): |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t0-------------------------------------0\n");
        printf("\t\t\t\t\t\t\t\t\t\t\tDigite: ");
            scanf("%d", &r[2]);

        };

        if(r[2]==1){

            soma[0] = soma[0] + 0;
            soma[1] = soma[1] + 5;
            soma[2] = soma[2] + 5;
            soma[3] = soma[3] + 5;

        }

        if(r[2]==2){

            soma[0] = soma[0] + 5;
            soma[1] = soma[1] + 0;
            soma[2] = soma[2] + 5;
            soma[3] = soma[3] + 5;

        }

        if(r[2]==3){

            soma[0] = soma[0] + 5;
            soma[1] = soma[1] + 5;
            soma[2] = soma[2] + 0;
            soma[3] = soma[3] + 5;

        }

        if(r[2]==4){

            soma[0] = soma[0] + 5;
            soma[1] = soma[1] + 5;
            soma[2] = soma[2] + 5;
            soma[3] = soma[3] + 0;

        }

    }

    if(r[9] == 2){

        system("cls");

        printf("\t\t\t\t\t\t\t\t\t\t\t0---------------------------------------------------------0\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| Em qual hor�rio voc� costuma estudar?                   |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| 1- Madrugada(00h a 06h)                                 |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| 2- Manh�(06h �s 12h)                                    |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| 3- Tarde(12h at� 18h)                                   |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| 4- Noite(18h at� 00h)                                   |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t0---------------------------------------------------------0\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t\tDigite: ");
        scanf("%d", &r[1]);

        while((r[1]!=1)&&(r[1]!=2)&&(r[1]!=3)&&(r[1]!=4)){

        printf("\t\t\t\t\t\t\t\t\t\t\t0-------------------------------------0\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t|      Valor atribu�do inv�lido       |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| INSIRA VALOR V�LIDO (1, 2, 3 ou 4): |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t0-------------------------------------0\n");
        printf("\t\t\t\t\t\t\t\t\t\t\tDigite: ");
            scanf("%d", &r[1]);

        };

        if(r[1]==1){

            soma[0] = soma[0] + 0;
            soma[1] = soma[1] + 5;
            soma[2] = soma[2] + 5;
            soma[3] = soma[3] + 5;

        }

        if(r[1]==2){

            soma[0] = soma[0] + 5;
            soma[1] = soma[1] + 0;
            soma[2] = soma[2] + 5;
            soma[3] = soma[3] + 5;

        }

        if(r[1]==3){

            soma[0] = soma[0] + 5;
            soma[1] = soma[1] + 5;
            soma[2] = soma[2] + 0;
            soma[3] = soma[3] + 5;

        }

        if(r[1]==4){

            soma[0] = soma[0] + 5;
            soma[1] = soma[1] + 5;
            soma[2] = soma[2] + 5;
            soma[3] = soma[3] + 0;

        }

    }

    if(r[9] ==3){

        system("cls");
        printf("\t\t\t\t\t\t\t\t\t\t\t0---------------------------------------------------------0\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| Em qual hor�rio voc� costuma trabalhar?                 |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| 1- Madrugada(00h a 06h)                                 |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| 2- Manh�(06h �s 12h)                                    |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| 3- Tarde(12h at� 18h)                                   |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| 4- Noite(18h at� 00h)                                   |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t0---------------------------------------------------------0\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t\tDigite: ");
        scanf("%d", &r[1]);

        while((r[1]!=1)&&(r[1]!=2)&&(r[1]!=3)&&(r[1]!=4)){

        printf("\t\t\t\t\t\t\t\t\t\t\t0-------------------------------------0\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t|      Valor atribu�do inv�lido       |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| INSIRA VALOR V�LIDO (1, 2, 3 ou 4): |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t0-------------------------------------0\n");
        printf("\t\t\t\t\t\t\t\t\t\t\tDigite: ");
            scanf("%d", &r[1]);

        };

        if(r[1]==1){

            soma[0] = soma[0] + 0;
            soma[1] = soma[1] + 5;
            soma[2] = soma[2] + 5;
            soma[3] = soma[3] + 5;

        }

        if(r[1]==2){

            soma[0] = soma[0] + 5;
            soma[1] = soma[1] + 0;
            soma[2] = soma[2] + 5;
            soma[3] = soma[3] + 5;

        }

        if(r[1]==3){

            soma[0] = soma[0] + 5;
            soma[1] = soma[1] + 5;
            soma[2] = soma[2] + 0;
            soma[3] = soma[3] + 5;

        }

        if(r[1]==4){

            soma[0] = soma[0] + 5;
            soma[1] = soma[1] + 5;
            soma[2] = soma[2] + 5;
            soma[3] = soma[3] + 0;

        }

    }

    system("cls");

    printf("\t\t\t\t\t\t\t\t\t\t0------------------------------------------------------------------------------------0\n");
    printf("\t\t\t\t\t\t\t\t\t\t| Voc� pratica um hobby, esporte, atividade ou ent�o alguma compromisso toda semana? |\n");
    printf("\t\t\t\t\t\t\t\t\t\t| 1-Sim                                                                              |\n");
    printf("\t\t\t\t\t\t\t\t\t\t| 2-N�o                                                                              |\n");
    printf("\t\t\t\t\t\t\t\t\t\t0------------------------------------------------------------------------------------0\n");
    printf("\t\t\t\t\t\t\t\t\t\t\tDigite: ");
    scanf("%d", &r[3]);

    while((r[3]!=1)&&(r[3]!=2)){

        printf("\t\t\t\t\t\t\t\t\t\t\t0--------------------------------0\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t|      Valor atribu�do inv�lido  |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| INSIRA VALOR V�LIDO (1 ou 2 ): |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t0--------------------------------0\n");
        printf("\t\t\t\t\t\t\t\t\t\t\tDigite: ");
        scanf("%d", &r[3]);

    };

    if(r[3]==1){

        system("cls");
        printf("\t\t\t\t\t\t\t\t\t\t\t0--------------------------------0\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| Digite o nome dessa atividade: |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t0--------------------------------0\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t\tDigite: ");
        fflush(stdin);
        scanf("%[^\n]", atv);

        printf("\t\t\t\t\t\t\t\t\t\t\t0----------------------------------0\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| Digite o hor�rio dessa atividade |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| 1- Madrugada(00h a 06h)          |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| 2- Manh�(06h �s 12h)             |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| 3- Tarde(12h at� 18h)            |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| 4- Noite(18h at� 00h)            |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t0----------------------------------0\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t\tDigite: ");
        scanf("%d", &r[4]);

        while((r[4]!=1)&&(r[4]!=2)&&(r[4]!=3)&&(r[4]!=4)){

        printf("\t\t\t\t\t\t\t\t\t\t\t0-------------------------------------0\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t|      Valor atribu�do inv�lido       |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| INSIRA VALOR V�LIDO (1, 2, 3 ou 4): |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t0-------------------------------------0\n");
        printf("\t\t\t\t\t\t\t\t\t\t\tDigite: ");
            scanf("%d", &r[4]);

        };

        if(r[4]==1){

            soma[0] = soma[0] + 0;
            soma[1] = soma[1] + 5;
            soma[2] = soma[2] + 5;
            soma[3] = soma[3] + 5;

        }

        if(r[4]==2){

            soma[0] = soma[0] + 5;
            soma[1] = soma[1] + 0;
            soma[2] = soma[2] + 5;
            soma[3] = soma[3] + 5;

        }

        if(r[4]==3){

            soma[0] = soma[0] + 5;
            soma[1] = soma[1] + 5;
            soma[2] = soma[2] + 0;
            soma[3] = soma[3] + 5;

        }

        if(r[4]==4){

            soma[0] = soma[0] + 5;
            soma[1] = soma[1] + 5;
            soma[2] = soma[2] + 5;
            soma[3] = soma[3] + 0;

        }

    }

    while (r[6]!=2){

        system("cls");

        printf("\t\t\t\t\t\t\t\t\t\t0---------------------------------------------------------------------------------------------------0\n");
        printf("\t\t\t\t\t\t\t\t\t\t| H� mais alguma atividade que deseja informar? Ex: Faxina, cozinhar, cuidar de um pet ou de algu�m |\n");
        printf("\t\t\t\t\t\t\t\t\t\t| 1-Sim                                                                                             |\n");
        printf("\t\t\t\t\t\t\t\t\t\t| 2-N�o                                                                                             |\n");
        printf("\t\t\t\t\t\t\t\t\t\t0---------------------------------------------------------------------------------------------------0\n");
        printf("\t\t\t\t\t\t\t\t\t\t\tDigite: ");
        scanf("%d", &r[6]);

        while((r[6]!=1)&&(r[6]!=2)){

            printf("\n\t\t\t\t\t\t\t\t\t\t\tValor atribu�do inv�lido\n\t\t\t\t\t\t\t\t\t\t\tINSIRA VALOR V�LIDO (1 ou 2)->\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\tDigite: ");
            scanf("%d", &r[6]);

        };

        switch (r[6]){

        case 1:

            system("cls");
            printf("\t\t\t\t\t\t\t\t\t\t\t0-------------------------------0\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t| Digite o nome dessa atividade |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t0-------------------------------0\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\tDigite: ");
            fflush(stdin);
            scanf("%[^\n]", atv2);

            system("cls");

            printf("\t\t\t\t\t\t\t\t\t\t\t0-----------------------------------------------0\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t| Digite o turno que esta atividade � executada:|\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t| 1- Madrugada(00h a 06h)                       |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t| 2- Manh�(06h �s 12h)                          |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t| 3- Tarde(12h at� 18h)                         |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t| 4- Noite(18h at� 00h)                         |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t0-----------------------------------------------0\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\tDigite: ");
            scanf("%d", &r[7]);

            while((r[7]!=1)&&(r[7]!=2)&&(r[7]!=3)&&(r[7]!=4)){

        printf("\t\t\t\t\t\t\t\t\t\t\t0-------------------------------------0\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t|      Valor atribu�do inv�lido       |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| INSIRA VALOR V�LIDO (1, 2, 3 ou 4): |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t0-------------------------------------0\n");
        printf("\t\t\t\t\t\t\t\t\t\t\tDigite: ");
                scanf("%d", &r[7]);

            };

            system("cls");

            printf("\t\t\t\t\t\t\t\t\t\t\t0-----------------------------------------------------0\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t| Quantas vezes na semana essa atividade � executada? |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t0-----------------------------------------------------0\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\tDigite: ");
            scanf("%d", &r[8]);

            if(r[7]==1){

                soma[0] = soma[0] + 0;
                soma[1] = soma[1] + 5;
                soma[2] = soma[2] + 5;
                soma[3] = soma[3] + 5;

            }

            if(r[7]==2){

                soma[0] = soma[0] + 5;
                soma[1] = soma[1] + 0;
                soma[2] = soma[2] + 5;
                soma[3] = soma[3] + 5;

            }

            if(r[7]==3){

                soma[0] = soma[0] + 5;
                soma[1] = soma[1] + 5;
                soma[2] = soma[2] + 0;
                soma[3] = soma[3] + 5;

            }

            if(r[7]==4){

                soma[0] = soma[0] + 5;
                soma[1] = soma[1] + 5;
                soma[2] = soma[2] + 5;
                soma[3] = soma[3] + 0;

            }

            break;

        default:

            if(r[6] != 2)

            {
          
                printf("\t\t\t\t\t\t\t\t\t\t\t0--------------------------------------------0\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t|          Valor atribu�do inv�lido          |\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t| deseja retornar e digitar um valor v�lido? |\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t|              1-Sim ou 2-N�o                |\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t0--------------------------------------------0\n");
                printf("\t\t\t\t\t\t\t\t\t\t\tDigite: ");

                scanf("%d", &r[6]);
            }
            break;

        }
    }

            system("cls");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t0----------------------0\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t|      RESULTADOS      |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t0----------------------0\n\n");

            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t0-------------------------0\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t   madrugada: %d pontos    \n", soma[0]);
            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t   manh�: %d pontos        \n", soma[1]);
            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t   tarde: %d pontos        \n", soma[2]);
            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t   noite: %d pontos        \n", soma[3]);
            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t0-------------------------0\n\n");


            printf("\t\t\t\t\t\t\t\t\t\t\t\t\tOBS:\n");

            printf("\t\t\t\t\t\t\t\t0------------------------------------------------------------------------------------------------------------------------0\n");
            printf("\t\t\t\t\t\t\t\t| OS TURNOS COM MENOS PONTOS S�O OS MENOS INDICADOS PARA AGENDAR ATIVIDADES, VISTO QUE S�O OS MAIS PRODUTIVOS/OCUPADOS   |\n");
            printf("\t\t\t\t\t\t\t\t| OS TURNOS COM MESMA QUANTIDADE DE PONTOS TEM PRODUTIVIDADE SEMELHANTE                                                  |\n");
            printf("\t\t\t\t\t\t\t\t| OS TURNOS COM MAIS PONTOS S�O INDICADOS PARA AGENDAR COMPROMISSOS                                                      |\n");
            printf("\t\t\t\t\t\t\t\t0------------------------------------------------------------------------------------------------------------------------0\n\n");


}

float fibonacci(float n){

    if (n <= 1){

        return n;

    } 
    
    else{

        return fibonacci(n-1) + fibonacci(n-2);

    }
}

float fatorial(float x) {

    if(x == 0 || x == 1){

        return 1;

    } 
    
    else{

        return x * fatorial(x-1);

    }
}

#endif
