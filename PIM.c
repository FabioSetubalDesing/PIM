#include <stdio.h> // padrão
#include <stdlib.h> // padrão
#include <string.h> // Essa biblioteca serve para usar os structs e manipulação de strings


typedef struct{
    char login[20]; // vetor login da struct cliente
    char senha[20]; // vetor senha da struct cliente
}
cliente; cliente c[1];  // diminuindo o nome da struct para "c" e o "[1]" é o máximo de pessoas com logins e senhas


int main(){


    char login1[20]; // responsável por armasazenar o login inserido pelo cliente
    char senha1[20]; // responsável por armazenar a senha inserida pelo cliente

    strcpy(c[0].login, "user"); // Definindo o login "Jadsom" na struct
    strcpy(c[0].senha, "123"); // Definindo a senha "123"  na struct

    printf("\nlogin:");
    scanf("%s", login1); // armazenando os dados inseridos pelo usuário para o vetor login que está dentro da função main

    printf("\nsenha:");
    scanf("%s", senha1); // armazenando os dados inseridos pelo usuário para o vetor senha que está dentro da função main

    if ((strcmp(login1,c[0].login)==0) && (strcmp(senha1,c[0].senha)==0)){ // A função strcmp é responsável por comparar string com string
        printf("Bem vindo ao sistema");

    }else{
        printf("Login e/ou senha incorretos"); // senão, login ou senha incorreta.
    }
    return 0;
}
