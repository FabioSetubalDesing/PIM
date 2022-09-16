#include<math.h>
#include<stdio.h>
#include<string.h>


//Declaração de função
void Relatorio();


int main()
{
    Relatorio();

    return 0;
}


//Desenvolvimento das funções
void Relatorio()
{
    /*
    |Objetivo: fazer um relatorio e vizualição TXT do relatorio
    |Data de criação: 16/9/2022
    |Autor: Fabio Setubal
    */

    printf("RELATORIO\n");
    printf("-------------\n\n");

    //declarações de variaveis
    char nome[20], motivo[50], data[20], texto[200];
    int tamanho_nome, tamanho_motivo, tamanho_data, tamanho_texto, verificacao, opcao, verificar,voltar;

    //laço de repetição para verificar se algum campo é invalido
    while(!verificacao)
    {
            printf("Nome.....: ");
            fgets(nome, 20, stdin);//usado para guarda uma string na variavel nome, com capacidade maxima de 20 caracteres

            printf("Data.....: ");
            fgets(data, 20, stdin);

            printf("Motivo.....: ");
            fgets(motivo, 50, stdin);

            printf("Texto.....: ");
            fgets(texto, 250, stdin);

            tamanho_nome = strlen(nome) -1; //para retorna o valor de comprimento da variavel nome
            tamanho_motivo = strlen(motivo) -1;
            tamanho_data = strlen(data) -1;
            tamanho_texto = strlen(texto) -1;

            //tomada de decisao para verificar se todas as variaveis [nome,data,motivo,texto] possuem valores
            if((tamanho_nome > 0) && (tamanho_data > 0) && (tamanho_motivo > 0) && (tamanho_texto > 0)){
                verificacao++;//sair do primeiro laço de repetição

                printf("|--------------------------------|\n");
                printf("| Relatorio enviado com sucesso! |\n");
                printf("|--------------------------------|\n\n\n");

                //------ Menu começo

                printf("MENU RELATORIO\n");
                printf("--------------\n");

                printf("+----------------------------+---------+\n");
                printf("|         Opcoes             |  Numero |\n");
                printf("+----------------------------+---------+\n");
                printf("| Vizualizar arquivo TXT     |    1    |\n");
                printf("+----------------------------+---------+\n");
                printf("| Nao vizualizar arquivo TXT |    2    |\n");
                printf("+----------------------------+---------|\n");

                //laço de repetição para verificar se alguma opção é invalida
                while(!verificar)
                {
                    printf("\nDigite o numero da opcao: ");
                    scanf("%d", &opcao);

                    switch(opcao)
                    {
                    case 1:
                        verificar++;
                        printf("\n\n                           +________________________________________+                                      \n");
                        printf("                           |          Arquivo TXT do relatorio      |                                      \n");
                        printf("___________________________________________________________________________________________________________\n\n");
                        printf(" Nome: %s                                                                                                  \n", nome);
                        printf("___________________________________________________________________________________________________________\n\n");
                        printf("Data de envio: %s                                                                                          \n", data);
                        printf("___________________________________________________________________________________________________________\n\n");
                        printf("Motivo do envio: %s                                                                                        \n", motivo);
                        printf("___________________________________________________________________________________________________________\n\n");
                        printf("Relatorio: %s                                                                                              \n", texto);
                        printf("___________________________________________________________________________________________________________\n");
                        printf("                           |               Fim arquivo              |                                      \n");
                        printf("                           +________________________________________+                                      \n");

                        break;

                    case 2:
                        verificar++; //sair do segundo laço de repetição
                        printf("|--------------------------------|\n");
                        printf("| O arquivo TXT nao sera exibido |\n");
                        printf("|--------------------------------|\n\n");
                        break;
                    }
                    //tomada de decisao para verificar se a variavel verificar é maior que 2 ou menor que 1
                    if((verificar > 2) || (verificar < 1))
                    {
                        printf("|---------------------------------------------------|\n");
                        printf("| Numero de opcao invalido, digite um numero valido |\n");
                        printf("|---------------------------------------------------|\n\n");
                    }

                }

                //------Menu fim

            }else{
                printf("|------------------------------------|\n");
                printf("| Campos invalidos , tente novamente |\n");
                printf("|------------------------------------|\n\n\n");
            }
        }
}
