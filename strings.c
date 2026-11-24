#include<stdio.h>
#include<string.h>

int main(){

    char nome[50];
    char senha[20];

    printf("Digite seu nome: ");
    fgets(nome, 50, stdin);
    nome [strcspn(nome, "\n")] = 0;

    printf("Digite sua senha: ");
    fgets(senha, 20, stdin);
    senha [strcspn(senha, "\n")] = 0;

    printf("Seu nome: ", nome);
    printf("Seu senha: ", senha);



return 0;

}