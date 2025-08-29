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
    printf("\t\t\t\t\t\t\t\t\t\t\t  | 4 - Opção que melhor te descreve         |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t  | 3 - Segunda melhor opção que te descreva |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t  | 2 - Próxima opção que te descreve        |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t  | 1 - A que menos te descreve              |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t  0------------------------------------------0\n\n");

    printf("\t\t\t\t\t\t\t\t\t\t\t0-----------------------------------------------0\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| 1) Eu tomo decisões importantes baseado em:   |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| 1 - Intuição:                                 |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| 2 - O que me soa melhor:                      |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| 3 - O que me parece melhor:                   |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| 4 - Um estudo preciso e minucioso do assunto: |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t0-----------------------------------------------0\n\n");


    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t1 - ");
    scanf("%d", &nota[0]);

    while((nota[0]!=1)&&(nota[0]!=2)&&(nota[0]!=3)&&(nota[0]!=4)){

        printf("\n\t\t\t\t\t\t\t\t\t\t\t\tVALOR ATRIBUÍDO INVÁLIDO\n\t\t\t\t\t\t\t\t\t\t\t\tINSIRA VALOR VÁLIDO (1, 2, 3 ou 4)->");
        scanf("%d", &nota[0]);

    };

    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t2 - ");
    scanf("%d", &nota[1]);

    while((nota[1]!=1)&&(nota[1]!=2)&&(nota[1]!=3)&&(nota[1]!=4)){

        printf("\n\t\t\t\t\t\t\t\t\t\t\t\tVALOR ATRIBUÍDO INVÁLIDO\n\t\t\t\t\t\t\t\t\t\t\t\tINSIRA VALOR VÁLIDO (1, 2, 3 ou 4)->");
        scanf("%d", &nota[1]);

    };

    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t3 - ");
    scanf("%d", &nota[2]);

    while((nota[2]!=1)&&(nota[2]!=2)&&(nota[2]!=3)&&(nota[2]!=4)){

        printf("\n\t\t\t\t\t\t\t\t\t\t\t\tVALOR ATRIBUÍDO INVÁLIDO\n\t\t\t\t\t\t\t\t\t\t\t\tINSIRA VALOR VÁLIDO (1, 2, 3 ou 4)->");
        scanf("%d", &nota[2]);

    };

    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t4 - ");
    scanf("%d", &nota[3]);

    while((nota[3]!=1)&&(nota[3]!=2)&&(nota[3]!=3)&&(nota[3]!=4)){

        printf("\n\t\t\t\t\t\t\t\t\t\t\t\tVALOR ATRIBUÍDO INVÁLIDO\n\t\t\t\t\t\t\t\t\t\t\t\tINSIRA VALOR VÁLIDO (1, 2, 3 ou 4)->");
        scanf("%d", &nota[3]);

    };

    system("cls");
    printf("\t\t\t\t\t\t\t\t\t\t\t0----------------------------------------------------------------------0\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| 2) Durante uma discussão eu sou mais influenciado por:               |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| 1 - Tom de voz da outra pessoa:                                      |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| 2 - Se eu posso ou não ver o argumento da outra pessoa:              |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| 3 - Se eu entro em contato ou não com os sentimentos reais do outro: |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| 4 - A lógica do argumento da outra pessoa:                           |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t0----------------------------------------------------------------------0\n\n");

    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t1 - ");
    scanf("%d", &nota[4]);

    while((nota[4]!=1)&&(nota[4]!=2)&&(nota[4]!=3)&&(nota[4]!=4)){

        printf("\n\t\t\t\t\t\t\t\t\t\t\t\tVALOR ATRIBUÍDO INVÁLIDO\n\t\t\t\t\t\t\t\t\t\t\t\tINSIRA VALOR VÁLIDO (1, 2, 3 ou 4)->");
        scanf("%d", &nota[4]);

    };

    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t2 - ");
    scanf("%d", &nota[5]);

    while((nota[5]!=1)&&(nota[5]!=2)&&(nota[5]!=3)&&(nota[5]!=4)){

        printf("\n\t\t\t\t\t\t\t\t\t\t\t\tVALOR ATRIBUÍDO INVÁLIDO\n\t\t\t\t\t\t\t\t\t\t\t\tINSIRA VALOR VÁLIDO (1, 2, 3 ou 4)->");
        scanf("%d", &nota[5]);

    };

    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t3 - ");
    scanf("%d", &nota[6]);

    while((nota[6]!=1)&&(nota[6]!=2)&&(nota[6]!=3)&&(nota[6]!=4)){

        printf("\n\t\t\t\t\t\t\t\t\t\t\t\tVALOR ATRIBUÍDO INVÁLIDO\n\t\t\t\t\t\t\t\t\t\t\t\tINSIRA VALOR VÁLIDO (1, 2, 3 ou 4)->");
        scanf("%d", &nota[6]);

    };

    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t4 - ");
    scanf("%d", &nota[7]);

    while((nota[7]!=1)&&(nota[7]!=2)&&(nota[7]!=3)&&(nota[7]!=4)){

        printf("\n\t\t\t\t\t\t\t\t\t\t\t\tVALOR ATRIBUÍDO INVÁLIDO\n\t\t\t\t\t\t\t\t\t\t\t\tINSIRA VALOR VÁLIDO (1, 2, 3 ou 4)->");
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

        printf("\n\t\t\t\t\t\t\t\t\t\t\t\tVALOR ATRIBUÍDO INVÁLIDO\n\t\t\t\t\t\t\t\t\t\t\t\tINSIRA VALOR VÁLIDO (1, 2, 3 ou 4)->");
        scanf("%d", &nota[8]);

    };

    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t2 - ");
    scanf("%d", &nota[9]);

    while((nota[9]!=1)&&(nota[9]!=2)&&(nota[9]!=3)&&(nota[9]!=4)){

        printf("\n\t\t\t\t\t\t\t\t\t\t\t\tVALOR ATRIBUÍDO INVÁLIDO\n\t\t\t\t\t\t\t\t\t\t\t\tINSIRA VALOR VÁLIDO (1, 2, 3 ou 4)->");
        scanf("%d", &nota[9]);

    };

    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t3 - ");
    scanf("%d", &nota[10]);

    while((nota[10]!=1)&&(nota[10]!=2)&&(nota[10]!=3)&&(nota[10]!=4)){

        printf("\n\t\t\t\t\t\t\t\t\t\t\t\tVALOR ATRIBUÍDO INVÁLIDO\n\t\t\t\t\t\t\t\t\t\t\t\tINSIRA VALOR VÁLIDO (1, 2, 3 ou 4)->");
        scanf("%d", &nota[10]);

    };

    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t4 - ");
    scanf("%d", &nota[11]);

    while((nota[11]!=1)&&(nota[11]!=2)&&(nota[11]!=3)&&(nota[11]!=4)){

        printf("\n\t\t\t\t\t\t\t\t\t\t\t\tVALOR ATRIBUÍDO INVÁLIDO\n\t\t\t\t\t\t\t\t\t\t\t\tINSIRA VALOR VÁLIDO (1, 2, 3 ou 4)->");
        scanf("%d", &nota[11]);

    };

    system("cls");

    printf("\t\t\t\t\t\t\t\t\t\t\t0---------------------------------------------------------------------------0\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| 4) É muito fácil pra mim:                                                 |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| 1 - Achar o volume e a sintonia ideais num sistema de som:                |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| 2 - Selecionar o ponto mais relevante relativo a um assunto interessante: |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| 3 - Escolher os móveis mais confort?veis:                                 |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| 4 - Escolher as combinações de cores mais ricas e atraentes:              |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t0---------------------------------------------------------------------------0\n\n");

    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t1 - ");
    scanf("%d", &nota[12]);

    while((nota[12]!=1)&&(nota[12]!=2)&&(nota[12]!=3)&&(nota[12]!=4)){

        printf("\n\t\t\t\t\t\t\t\t\t\t\t\tVALOR ATRIBUÍDO INVÁLIDO\n\t\t\t\t\t\t\t\t\t\t\t\tINSIRA VALOR VÁLIDO (1, 2, 3 ou 4)->");
        scanf("%d", &nota[12]);

    };

    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t2 - ");
    scanf("%d", &nota[13]);

    while((nota[13]!=1)&&(nota[13]!=2)&&(nota[13]!=3)&&(nota[13]!=4)){

        printf("\n\t\t\t\t\t\t\t\t\t\t\t\tVALOR ATRIBUÍDO INVÁLIDO\n\t\t\t\t\t\t\t\t\t\t\t\tINSIRA VALOR VÁLIDO (1, 2, 3 ou 4)->");
        scanf("%d", &nota[13]);

    };

    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t3 - ");
    scanf("%d", &nota[14]);

    while((nota[14]!=1)&&(nota[14]!=2)&&(nota[14]!=3)&&(nota[14]!=4)){

        printf("\n\t\t\t\t\t\t\t\t\t\t\t\tVALOR ATRIBUÍDO INVÁLIDO\n\t\t\t\t\t\t\t\t\t\t\t\tINSIRA VALOR VÁLIDO (1, 2, 3 ou 4)->");
        scanf("%d", &nota[14]);

    };

    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t4 - ");
    scanf("%d", &nota[15]);

    while((nota[15]!=1)&&(nota[15]!=2)&&(nota[15]!=3)&&(nota[15]!=4)){

        printf("\n\t\t\t\t\t\t\t\t\t\t\t\tVALOR ATRIBUÍDO INVÁLIDO\n\t\t\t\t\t\t\t\t\t\t\t\tINSIRA VALOR VÁLIDO (1, 2, 3 ou 4)->");
        scanf("%d", &nota[15]);

    };

    system("cls");

    printf("\t\t\t\t\t\t\t\t\t\t\t0-------------------------------------------------------------------------0\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| 5) Eu me percebo assim:                                                 |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| 1 - Se estou muito em sintonia com os sons do ambiente:                 |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| 2 - Eu sou muito capaz de raciocinar com fatos e dados novos:           |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| 3 - Eu sou muito sensível com a maneira que a roupa veste o meu corpo:  |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| 4 - Eu responto fortemente às cores e à aparência de uma sala:          |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t0-------------------------------------------------------------------------0\n");

    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t1 - ");
    scanf("%d", &nota[16]);

    while((nota[16]!=1)&&(nota[16]!=2)&&(nota[16]!=3)&&(nota[16]!=4)){

        printf("\n\t\t\t\t\t\t\t\t\t\t\t\tVALOR ATRIBUÍDO INVÁLIDO\n\t\t\t\t\t\t\t\t\t\t\t\tINSIRA VALOR VÁLIDO (1, 2, 3 ou 4)->");
        scanf("%d", &nota[16]);

    };

    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t2 - ");
    scanf("%d", &nota[17]);

    while((nota[17]!=1)&&(nota[17]!=2)&&(nota[17]!=3)&&(nota[17]!=4)){

        printf("\n\t\t\t\t\t\t\t\t\t\t\t\tVALOR ATRIBUÍDO INVÁLIDO\n\t\t\t\t\t\t\t\t\t\t\t\tINSIRA VALOR VÁLIDO (1, 2, 3 ou 4)->");
        scanf("%d", &nota[17]);

    };

    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t3 - ");
    scanf("%d", &nota[18]);

    while((nota[18]!=1)&&(nota[18]!=2)&&(nota[18]!=3)&&(nota[18]!=4)){

        printf("\n\t\t\t\t\t\t\t\t\t\t\t\tVALOR ATRIBUÍDO INVÁLIDO\n\t\t\t\t\t\t\t\t\t\t\t\tINSIRA VALOR VÁLIDO (1, 2, 3 ou 4)->");
        scanf("%d", &nota[18]);

    };

    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t4 - ");
    scanf("%d", &nota[19]);

    while((nota[19]!=1)&&(nota[19]!=2)&&(nota[19]!=3)&&(nota[19]!=4)){

        printf("\n\t\t\t\t\t\t\t\t\t\t\t\tVALOR ATRIBUÍDO INVÁLIDO\n\t\t\t\t\t\t\t\t\t\t\t\tINSIRA VALOR VÁLIDO (1, 2, 3 ou 4)->");
        scanf("%d", &nota[19]);

    };

    cin = (nota[0]+nota[7]+nota[9]+nota[14]+nota[18])*2;
    aud = (nota[1]+nota[4]+nota[11]+nota[12]+nota[16])*2;
    vis = (nota[2]+nota[5]+nota[8]+nota[15]+nota[19])*2;
    dig = (nota[3]+nota[6]+nota[10]+nota[13]+nota[17])*2;

    system("cls");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t0------------------------------0\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t| O TESTE INDICOU QUE VOCÊ É:  |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t| %d%% CINESTÉSICO              |\n",cin);
    printf("\t\t\t\t\t\t\t\t\t\t\t\t| %d%% AUDITIVO                 |\n",aud);
    printf("\t\t\t\t\t\t\t\t\t\t\t\t| %d%% VISUAL                   |\n",vis);
    printf("\t\t\t\t\t\t\t\t\t\t\t\t| %d%% DIGITAL                  |\n",dig);
    printf("\t\t\t\t\t\t\t\t\t\t\t\t0------------------------------0\n\n");

    do{
        printf("\t\t\t\t\t\t\t\t\t\t\t0----------------------------------------------0\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| Deseja ler sobre alguma das caracteristicas? |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| 1: VISUAL                                    |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| 2: CINESTÉSICO                               |\n");
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
            printf("\t\t\t\t|   A pessoa com predominância do canal VISUAL é ligada na beleza e estética, em formas e detalhes. Tem uma postura corporal rígida e sua respiração é torácica.                            |\n");
            printf("\t\t\t\t| Ela fala muito rapidamente porque as imagens se sucedem em sua mente como um filme. Entre o prático e o bonito, a pessoa VISUAL sempre escolherá o bonito. É uma                          |\n");
            printf("\t\t\t\t| pessoa que preza por arrumação e ordem e para atender o que lhe dizem, a pessoa VISUAL precisa que ""mostrem"" o que é, não dá tanto valor às palavras e nem sempre                       |\n");
            printf("\t\t\t\t| reage bem ao toque, ao contrário da pessoa Cinestésica.                                                                                                                                   |\n");
            printf("\t\t\t\t|   A pessoa em que predomina o modelo visual é mais rápida, ansiosa, agitada e impulsiva. Quanto mais visual, mais é mandona, franca e sincera.                                            |\n");
            printf("\t\t\t\t| Bons chefes, gerentes e gestores, em geral, são visuais. Outros elementos importantes são a capacidade de desempenhar várias tarefas ao mesmo tempo, gostar de prazos apertados, implantar|\n");
            printf("\t\t\t\t| projetos e cumprir metas. São pessoas que costumam projetar o futuro, prestam atenção aos detalhes, gostam de organização e harmonia, sua aprendizagem é                                  |\n");
            printf("\t\t\t\t| estimulada por meios de imagens, cores, formatos e luzes                                                                                                                                  |\n");
            printf("\t\t\t\t|=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
            printf("\t\t\t\t| Técnicas de estudo e assimilação para pessoas VISUAIS:                                                                                                                                    |\n");
            printf("\t\t\t\t| Sublinhar, usar diferentes cores, marcadores, fluxogramas, desenhos, pôsteres, slides, palestrantes que gesticulam e utilizam linguagem cênica, pictórica, livros,                        |\n");
            printf("\t\t\t\t| texto com diagramas e figuras, gráficos, símbolos.                                                                                                                                        |\n");
            printf("\t\t\t\t0=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=0\n\n");

        break;


        case(2):

            system("color 0F");

            system("cls");
            printf("\t\t\t\t\t0======================================================================================================================================================================0\n");
            printf("\t\t\t\t\t| O que significa ser CINESTÉSICO ?                                                                                                                                    |\n");
            printf("\t\t\t\t\t|                                                                                                                                                                      |\n");
            printf("\t\t\t\t\t|     São as pessoas que gostam de tocar e sentir as coisas do mundo. Sensações e sentimentos são palavras chave de suas decisões. Seu processo de aprendizagem é      |\n");
            printf("\t\t\t\t\t| rápido ao se envolverem com o conteúdo e são expostas a estímulos práticos de execução de experimentos e interação em grupo.                                         |\n");
            printf("\t\t\t\t\t| A pessoa com predominância do canal CINESTÉSICO dos 3 tipos, o mais sujeito ao sofrimento. Para esta pessoa todas as experiências são físicas.                       |\n");
            printf("\t\t\t\t\t|     Esta pessoa prefere conforto a beleza e busca sempre o bem-estar, o prazer e o aconchego. Este tipo de pessoa precisa ser abraçaada, tocada, beijada             |\n");
            printf("\t\t\t\t\t| para que se sinta amada. Ela prefere roupas velhas e confortáveis, sapatos que não apertam, nadar, pisar na areia, estar junto da natureza.                          |\n");
            printf("\t\t\t\t\t| As pessoas CINESTÉSICAS possuem o tom de voz baixo, ritmo lento e respiração abdominal. Gostam de músicas lentas e baladas e se                                      |\n");
            printf("\t\t\t\t\t| sentem agredidas quando não são correspondidas em sua necessidade de contato corporal. É socialmente orientado. Gosta de gente, de falar,                            |\n");
            printf("\t\t\t\t\t| de aparecer; adora eventos, festas e oportunidades para comunicação. A desordem reina, mas a criatividade é solta. É extrovertido                                    |\n");
            printf("\t\t\t\t\t| e precisa trabalhar em equipe. Gosta de correr riscos, prefere trabalhar na rua ou em funções que exijam contato com pessoas ou expressão verbal de ideias.          |\n");
            printf("\t\t\t\t\t|======================================================================================================================================================================|\n");
            printf("\t\t\t\t\t| Técnicas de estudo e assimilação para pessoas CINESTÉSICAS:                                                                                                          |\n");
            printf("\t\t\t\t\t| Todos os seus sentidos - visão, tato, paladar, olfato, audição, laboratórios, viagens de campo, passeios de campo/excursões, exemplos de princípios                  |\n");
            printf("\t\t\t\t\t| Palestras que dão exemplos da vida real, aplicações, abordagens mão na massa, (informática), tentativa e erro, coleções de tipos de pedras, plantas, conchas, grama  |\n");
            printf("\t\t\t\t\t| Exibições, amostras, fotografias, receitas - soluções para problemas, folhas de provas antigas.                                                                      |\n");
            printf("\t\t\t\t\t0======================================================================================================================================================================0\n\n");

        break;

        case(3):

            system("color 04");

            system("cls");
            printf("\t\t\t\t0--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------0\n");
            printf("\t\t\t\t| O que significa ser AUDITIVO ?                                                                                                                                                       |\n");
            printf("\t\t\t\t|                                                                                                                                                                                      |\n");
            printf("\t\t\t\t|   A pessoa com predominância AUDITIVA, não dá grande valor às aparências, mas sim ao bom papo, bom senso e inteligência. São equilibradas e estão sempre prontas                     |\n");
            printf("\t\t\t\t| para discutir os problemas pois acreditam na lógica dos argumentos. O tom da voz é médio, a respiração é torácica e abdominal.                                                       |\n");
            printf("\t\t\t\t| A memória para os sons é fantástica: são capazes de lembrar-se de coisas que lhes foram ditas há muitos anos atrás.                                                                  |\n");
            printf("\t\t\t\t| O barulho, vozes estridentes ou ásperas ferem as pessoas auditivas. Apreciam músicas com letras bem elaboradas, que passam uma mensagem consistente.                                 |\n");
            printf("\t\t\t\t| Para ter certeza de alguma coisa, o auditivo precisa ouvir, do contrário, não acreditará.                                                                                            |\n");
            printf("\t\t\t\t|   Consegue se concentrar e guardar informações apenas ouvindo-as, gosta de música e de falar ao telefone, com pensamento lógico e prático, é uma pessoa que busca ação e pioneirismo |\n");
            printf("\t\t\t\t| é uma pessoa mais calma, tranquila, ponderada; prefere ouvir do que falar; é detalhista, organizada, tímida e perfeccionista. Prefere o previsível e a rotina.                       |\n");
            printf("\t\t\t\t| É mais focada em tarefas e processos do que em gente, ilustra. É rígido e formal. Gosta de tabelas, gráficos, concentração; é alguém que não se importa de                           |\n");
            printf("\t\t\t\t| ter de refazer várias vezes as mesmas coisas, contanto que estejam corretas. Para um auditivo, trabalhar com análises e cálculos é um prazer                                         |\n");
            printf("\t\t\t\t|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|\n");
            printf("\t\t\t\t| Técnicas de estudo e assimilação para pessoas AUDITIVAS:                                                                                                                             |\n");
            printf("\t\t\t\t| Participe das aulas, Participe das discussões e tutoriais, Discuta tópicos com outras pessoas, Discuta tópicos com seus professores, Explique novas ideias para outras pessoas       |\n");
            printf("\t\t\t\t| Utilize um gravador, Lembre-se dos exemplos interessantes, histórias, piadas, Descreva os títulos, figuras e outros aspectos visuais para alguém que não estava lá                   |\n");
            printf("\t\t\t\t| Deixe espaços em suas anotações para um repasse posterior ou preenchimento?                                                                                                          |\n");
            printf("\t\t\t\t0--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------0\n\n");

        break;

        case(4):

            system("color 02");

            system("cls");
            printf("\t0################################################################################################################################################################################################################################0\n");
            printf("\t| O que significa ser DIGITAL ?                                                                                                                                                                                                  |\n");
            printf("\t|                                                                                                                                                                                                                                |\n");
            printf("\t|     Você já percebeu que na sua cabeça tem uma voz que conversa com você? Essa voz às vezes aparece pra fazer perguntas ou criticar algumas coisas.                                                                            |\n");
            printf("\t| Mas, também para responder e entender o porquê das coisas. A pessoa digital é a pessoa que convive com essa voz com mais ênfase.                                                                                               |\n");
            printf("\t| Vive conversando com ela mesma. Até quando conversa com outra pessoa, ela conversa ao mesmo tempo com ela mesma, na mente dela.                                                                                                |\n");
            printf("\t| Lembrando tem duas maneiras de aprender as coisas: através de fatores externos e internos. Então, a digital tem mais facilidade de aprender internamente.                                                                      |\n");
            printf("\t|     Ela com ela mesma. Tipo uma filósofa. É inteligentíssima, desconfiada, crítica, curiosa e observadora. Precisa entender dos detalhes de tudo.                                                                              |\n");
            printf("\t| Então, costuma fazer muitas perguntas. Quando ela ouve uma história, quer entender os detalhes e analisar para ver se faz sentido.                                                                                             |\n");
            printf("\t| Quando ela conta a história, comenta sobre o porque de todas as coisas que estão acontecendo. O lado ruim é que se ela não souber lidar com isso, vai acabar se estressando                                                    |\n");
            printf("\t| muito e também estressando os outros. Porque ninguém aguenta uma pessoa que fica enchendo o saco com todo tipo de pergunta né. Os pensamentos em sua mente a atrapalham em manter o foco.                                      |\n");
            printf("\t|################################################################################################################################################################################################################################|\n");
            printf("\t| Técnicas de estudo e assimilação para pessoas DIGITAIS:                                                                                                                                                                        |\n");
            printf("\t| Leia bastante conteúdo e reflita sobre. Se esforce até tudo fazer sentido pra você. Se esforce para ficar calmo e tranquilo. Pratique a meditação.                                                                             |\n");
            printf("\t| Não seja multitarefas, faça uma coisa de cada vez. Se concentre. Organize seus pensamentos. Pode ser que muita coisa que passa pela sua cabeça, não seja relevante. Então, tente analisar se seus pensamentos são importantes. |\n");
            printf("\t| Resolva exercícios (questões de provas mesmo) relacionados ao tema que quer aprender.                                                                                                                                          |\n");
            printf("\t0################################################################################################################################################################################################################################0\n\n");

        break;

        case(5):

            system("cls");

            LER=5;

            system("color 06");


        break;

        default:

            system("cls");

            printf("\t\t\t\t\t\t\t\t\t\t\t\tENTRADA INVÁLIDA! DIGITE NOVAMENTE:\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t0----------------------------------------------0\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t| Deseja ler sobre alguma das características? |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t| 1: VISUAL                                    |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t| 2: CINESTÉSICO                               |\n");
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
    printf("\t\t\t\t\t| Olá, seja bem-vindo(a) ao questionário de perfil de produtividade da nossa agenda. Ele o ajudará a traçar um perfil produtivo e otimizará sua rotina!| \n");
    printf("\t\t\t\t\t0------------------------------------------------------------------------------------------------------------------------------------------------------0\n\n");

    //printf("Ser?o x perguntas\n\n");

    printf("\t\t\t\t\t\t\t\t\t\t\t\tPOR FAVOR, RESPONDA\n\n");

    printf("\t\t\t\t\t\t\t\t\t\t\t0-----------------------------0\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| Em qual destes você dorme?  |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| 1- Madrugada(00h a 06h)     |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| 2- Manhã(06h às 12h)        |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| 3- Tarde(12h até 18h)       |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| 4- Noite(18h até 00h)       |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t0-----------------------------0\n");
    printf("\t\t\t\t\t\t\t\t\t\t\tDigite: ");
    scanf("%d", &r[0]);

    while((r[0]!=1)&&(r[0]!=2)&&(r[0]!=3)&&(r[0]!=4)){

        printf("\t\t\t\t\t\t\t\t\t\t\t0-------------------------------------0\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t|      Valor atribuído inválido       |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| INSIRA VALOR VÁLIDO (1, 2, 3 ou 4): |\n");
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
    printf("\t\t\t\t\t\t\t\t\t\t\t| 4-Nenhuma das opções anteriores                         |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t0---------------------------------------------------------0\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\tDigite: ");
    scanf("%d", &r[9]);

    while((r[0]!=1)&&(r[9]!=2)&&(r[9]!=3)&&(r[9]!=4)){

        printf("\t\t\t\t\t\t\t\t\t\t\t0-------------------------------------0\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t|      Valor atribuído inválido       |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| INSIRA VALOR VÁLIDO (1, 2, 3 ou 4): |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t0-------------------------------------0\n");
        printf("\t\t\t\t\t\t\t\t\t\t\tDigite: ");
        scanf("%d", &r[9]);

    };

    if(r[9] == 1)
    {
        system("cls");

        printf("\t\t\t\t\t\t\t\t\t\t\t0---------------------------------------------------------0\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| Em qual horário você costuma estudar?                   |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| 1- Madrugada(00h a 06h)                                 |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| 2- Manhã(06h às 12h)                                    |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| 3- Tarde(12h até 18h)                                   |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| 4- Noite(18h até 00h)                                   |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t0---------------------------------------------------------0\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t\tDigite: ");
        scanf("%d", &r[1]);

        while((r[1]!=1)&&(r[1]!=2)&&(r[1]!=3)&&(r[1]!=4)){

        printf("\t\t\t\t\t\t\t\t\t\t\t0-------------------------------------0\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t|      Valor atribuído inválido       |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| INSIRA VALOR VÁLIDO (1, 2, 3 ou 4): |\n");
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
        printf("\t\t\t\t\t\t\t\t\t\t\t| Em qual horário você trabalha?                          |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| 1- Madrugada(00h a 06h)                                 |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| 2- Manhã(06h às 12h)                                    |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| 3- Tarde(12h até 18h)                                   |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| 4- Noite(18h até 00h)                                   |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t0---------------------------------------------------------0\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t\tDigite: ");
        scanf("%d", &r[2]);

        while((r[2]!=1)&&(r[2]!=2)&&(r[2]!=3)&&(r[2]!=4)){

        printf("\t\t\t\t\t\t\t\t\t\t\t0-------------------------------------0\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t|      Valor atribuído inválido       |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| INSIRA VALOR VÁLIDO (1, 2, 3 ou 4): |\n");
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
        printf("\t\t\t\t\t\t\t\t\t\t\t| Em qual horário você costuma estudar?                   |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| 1- Madrugada(00h a 06h)                                 |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| 2- Manhã(06h às 12h)                                    |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| 3- Tarde(12h até 18h)                                   |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| 4- Noite(18h até 00h)                                   |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t0---------------------------------------------------------0\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t\tDigite: ");
        scanf("%d", &r[1]);

        while((r[1]!=1)&&(r[1]!=2)&&(r[1]!=3)&&(r[1]!=4)){

        printf("\t\t\t\t\t\t\t\t\t\t\t0-------------------------------------0\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t|      Valor atribuído inválido       |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| INSIRA VALOR VÁLIDO (1, 2, 3 ou 4): |\n");
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
        printf("\t\t\t\t\t\t\t\t\t\t\t| Em qual horário você costuma trabalhar?                 |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| 1- Madrugada(00h a 06h)                                 |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| 2- Manhã(06h às 12h)                                    |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| 3- Tarde(12h até 18h)                                   |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| 4- Noite(18h até 00h)                                   |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t0---------------------------------------------------------0\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t\tDigite: ");
        scanf("%d", &r[1]);

        while((r[1]!=1)&&(r[1]!=2)&&(r[1]!=3)&&(r[1]!=4)){

        printf("\t\t\t\t\t\t\t\t\t\t\t0-------------------------------------0\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t|      Valor atribuído inválido       |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| INSIRA VALOR VÁLIDO (1, 2, 3 ou 4): |\n");
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
    printf("\t\t\t\t\t\t\t\t\t\t| Você pratica um hobby, esporte, atividade ou então alguma compromisso toda semana? |\n");
    printf("\t\t\t\t\t\t\t\t\t\t| 1-Sim                                                                              |\n");
    printf("\t\t\t\t\t\t\t\t\t\t| 2-Não                                                                              |\n");
    printf("\t\t\t\t\t\t\t\t\t\t0------------------------------------------------------------------------------------0\n");
    printf("\t\t\t\t\t\t\t\t\t\t\tDigite: ");
    scanf("%d", &r[3]);

    while((r[3]!=1)&&(r[3]!=2)){

        printf("\t\t\t\t\t\t\t\t\t\t\t0--------------------------------0\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t|      Valor atribuído inválido  |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| INSIRA VALOR VÁLIDO (1 ou 2 ): |\n");
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
        printf("\t\t\t\t\t\t\t\t\t\t\t| Digite o horário dessa atividade |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| 1- Madrugada(00h a 06h)          |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| 2- Manhã(06h às 12h)             |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| 3- Tarde(12h até 18h)            |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| 4- Noite(18h até 00h)            |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t0----------------------------------0\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t\tDigite: ");
        scanf("%d", &r[4]);

        while((r[4]!=1)&&(r[4]!=2)&&(r[4]!=3)&&(r[4]!=4)){

        printf("\t\t\t\t\t\t\t\t\t\t\t0-------------------------------------0\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t|      Valor atribuído inválido       |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| INSIRA VALOR VÁLIDO (1, 2, 3 ou 4): |\n");
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
        printf("\t\t\t\t\t\t\t\t\t\t| Há mais alguma atividade que deseja informar? Ex: Faxina, cozinhar, cuidar de um pet ou de alguém |\n");
        printf("\t\t\t\t\t\t\t\t\t\t| 1-Sim                                                                                             |\n");
        printf("\t\t\t\t\t\t\t\t\t\t| 2-Não                                                                                             |\n");
        printf("\t\t\t\t\t\t\t\t\t\t0---------------------------------------------------------------------------------------------------0\n");
        printf("\t\t\t\t\t\t\t\t\t\t\tDigite: ");
        scanf("%d", &r[6]);

        while((r[6]!=1)&&(r[6]!=2)){

            printf("\n\t\t\t\t\t\t\t\t\t\t\tValor atribuído inválido\n\t\t\t\t\t\t\t\t\t\t\tINSIRA VALOR VÁLIDO (1 ou 2)->\n");
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
            printf("\t\t\t\t\t\t\t\t\t\t\t| Digite o turno que esta atividade é executada:|\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t| 1- Madrugada(00h a 06h)                       |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t| 2- Manhã(06h às 12h)                          |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t| 3- Tarde(12h até 18h)                         |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t| 4- Noite(18h até 00h)                         |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t0-----------------------------------------------0\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\tDigite: ");
            scanf("%d", &r[7]);

            while((r[7]!=1)&&(r[7]!=2)&&(r[7]!=3)&&(r[7]!=4)){

        printf("\t\t\t\t\t\t\t\t\t\t\t0-------------------------------------0\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t|      Valor atribuído inválido       |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t| INSIRA VALOR VÁLIDO (1, 2, 3 ou 4): |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t0-------------------------------------0\n");
        printf("\t\t\t\t\t\t\t\t\t\t\tDigite: ");
                scanf("%d", &r[7]);

            };

            system("cls");

            printf("\t\t\t\t\t\t\t\t\t\t\t0-----------------------------------------------------0\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t| Quantas vezes na semana essa atividade é executada? |\n");
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
                printf("\t\t\t\t\t\t\t\t\t\t\t|          Valor atribuído inválido          |\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t| deseja retornar e digitar um valor válido? |\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t|              1-Sim ou 2-Não                |\n");
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
            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t   manhã: %d pontos        \n", soma[1]);
            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t   tarde: %d pontos        \n", soma[2]);
            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t   noite: %d pontos        \n", soma[3]);
            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t0-------------------------0\n\n");


            printf("\t\t\t\t\t\t\t\t\t\t\t\t\tOBS:\n");

            printf("\t\t\t\t\t\t\t\t0------------------------------------------------------------------------------------------------------------------------0\n");
            printf("\t\t\t\t\t\t\t\t| OS TURNOS COM MENOS PONTOS SÃO OS MENOS INDICADOS PARA AGENDAR ATIVIDADES, VISTO QUE SÃO OS MAIS PRODUTIVOS/OCUPADOS   |\n");
            printf("\t\t\t\t\t\t\t\t| OS TURNOS COM MESMA QUANTIDADE DE PONTOS TEM PRODUTIVIDADE SEMELHANTE                                                  |\n");
            printf("\t\t\t\t\t\t\t\t| OS TURNOS COM MAIS PONTOS SÃO INDICADOS PARA AGENDAR COMPROMISSOS                                                      |\n");
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
