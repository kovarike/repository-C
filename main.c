#include <stdio.h>
#include <string.h>

struct Pessoas
{
        char nome[30];
        char endereco[50];
        int telefone;
};

int main ()
{

        int i;
        void print ();
        void recebe ();

        struct Pessoas pessoas[2];

        for (i=0; i!=2; i++)
        {
                recebe(&pessoas[i]);
        }
        printf ("\n\n");
        for (i=0; i!=2; i++)
        {
                print (&pessoas[i]);
        }
        return 0;
};


void recebe (struct Pessoas *y)
{
        fflush (stdin);
        fgets (y->nome, 30, stdin);
        fgets (y->endereco, 50, stdin);
        scanf ("%d", &y->telefone);
};

void print (struct Pessoas *x)
{
        printf ("%s", x->nome);
        printf ("%s", x->endereco);
        printf ("%d", x->telefone);
}
