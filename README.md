# Agenda Pessoal em C com Funções de Produtividade
![C Logo](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)

Este projeto é uma aplicação de console desenvolvida em C para gerenciar uma agenda de atividades pessoais. Além do gerenciamento de tarefas, o programa inclui ferramentas interativas para análise de perfil de produtividade e sistema representacional (estilo de aprendizagem).

## Sobre o Projeto

Este software foi desenvolvido como um trabalho acadêmico para uma disciplina do curso de **Ciência da Computação**. O objetivo principal era aplicar conceitos fundamentais da programação procedural em C para criar uma solução prática e funcional.

## Estrutura do Projeto

O projeto é construído de forma procedural em C, utilizando `structs` para modelar os dados das atividades e funções modulares para cada uma das funcionalidades. Os dados são salvos e carregados a partir de um arquivo de texto (`atividades_agenda.txt`), garantindo a persistência das informações entre as execuções.

## Funcionalidades

* **Gerenciar Atividades:** A aplicação permite cadastrar, listar e buscar atividades por nome, data ou hora.
* **Persistência de Dados:** As atividades cadastradas são salvas em um arquivo `atividades_agenda.txt`, permitindo que os dados não se percam ao fechar o programa.
* **Relatório de Rotina:** Um questionário interativo que analisa os horários de sono, estudo e trabalho do usuário para sugerir os períodos do dia mais livres para novas atividades.
* **Teste Representacional:** Um teste para identificar o perfil de aprendizagem do usuário (Visual, Auditivo, Cinestésico ou Digital), com descrições detalhadas de cada perfil e dicas de estudo.
* **Interface de Console:** A interação com o usuário é feita através de um menu simples e intuitivo no terminal.

## Tecnologias Utilizadas

O projeto foi totalmente desenvolvido em **Linguagem C**.

## Como Instalar e Rodar

Para compilar e executar o projeto, você precisará de um compilador C, ou simplesmente rodar o executavel PFAP2FINAL.exe.

1.  **Baixe os arquivos:** Faça o download de todos os arquivos do repositório (`main.c` e `PFAP2_H.h`) e coloque-os na mesma pasta.
2.  **Abra o terminal:** Navegue até a pasta onde você salvou os arquivos.
3.  **Compile o projeto:** Execute o seguinte comando no terminal para compilar os arquivos:
