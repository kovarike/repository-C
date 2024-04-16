#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>





int main()
{
    //char Yurname[30];
    //char title[30];
    //int age;
    //char description[100];
    //int va;

    //printf("Formulario\n");


    //fflush (stdin);
    //printf("qual o sue nome? \n");
    //scanf("%s", &Yurname);

    //fflush (stdin);
   //printf("coloque um titulo.\n");
    //scanf("%s", &title);

    //fflush (stdin);
    //printf("Qual a sua idade.\n");
   //scanf("%d", &age);

    //int n = 1;
    //int y = 2;

    //fflush (stdin);
    //printf("deseja adicionar uma descrição ? \n digite 1 para encerrar ou 2 para continuar.\n");
    //scanf("%d", &va);



    //if (va == 1){
        //printf("ok, formulario encerrado.\n ");
    //} else {
        //printf("digite a descrição.\n");
        //scanf("%s", &description);

    //};

    //printf("%s\n", yname);
    //printf("%s\n", title);

    int n = 1, y = 2;
    int va1, va2, va3;
    char de1[100], de2[100], de3[100];

    printf("Você podera adicionar até 3 resumos, Deseja proceguir? \n");
    printf("Digite 1 para não ou 2 para sim !!\n");
    scanf("%d", &va1);


        if (va1 == n){
        printf("ok, formulario encerrado.\n ");
    } else {
        fflush (stdin);
        printf("Digite um breve resumo.\n");
        scanf("%s", &de1);

    };

    printf("Deseja proceguir? \n");
    printf("Digite 1 para não ou 2 para sim !!\n");
    scanf("%d", &va2);

            if (va2 == n){
        printf("ok, formulario encerrado.\n ");
    } else {
        fflush (stdin);
        printf("Digite um breve resumo.\n");
        scanf("%s", &de2);

    };

    printf("Deseja proceguir? \n");
    printf("Digite 1 para não ou 2 para sim !!\n");
    scanf("%d", &va3);

            if (va3 == n){
        printf("ok, formulario encerrado.\n ");
    } else {
        fflush (stdin);
        printf("Digite um breve resumo.\n");
        scanf("%s", &de3);

    };



    printf("%s %s %s\n", de1, de2, de3);














    return 0;
};






