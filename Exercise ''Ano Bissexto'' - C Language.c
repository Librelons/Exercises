#include <stdio.h>

int main ()
{   
    int bissexto;
    char resposta;

    do{
        printf ("Digite um ano:\n");
        scanf ("%i", &bissexto);

        float resto = bissexto % 4;

        if (resto == 0){
            printf ("O ano %i é bissexto\n", bissexto);
            }
        else{
            printf ("O ano %i não é bissexto\n", bissexto);}

        do{

            printf ("Deseja verificar outro ano?\n");
            scanf (" %c", &resposta);

            if (resposta != 's' && resposta != 'n'){
                printf ("Resposta inválida\n");
            }
            else{
                printf("\n");
            }

        }while (resposta != 's' && resposta != 'n');

    }while (resposta == 's');

    return 0;
}