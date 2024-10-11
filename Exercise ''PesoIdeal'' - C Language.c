#include <stdio.h>

int main ()
{
    float altura;
    char gênero, resposta;

    do{
        
        printf ("Insira a sua altura:\n");
        scanf ("%f", &altura);
        printf ("Qual o seu gênero?\n");
        scanf (" %c", &gênero);
        
        if (gênero == 'M'){
            float pesoM = (72.7 * altura) - 58;
            printf ("Seu peso ideal é %.2fKg\n",pesoM );
            }
        else if (gênero == 'F'){
            float pesoIdealF = (62.1 * altura) - 44.7;
            printf ("Seu peso ideal é %.2fKg\n", pesoIdealF);
            }
        else{
            printf ("Gênero inválido\n");
        }
        printf ("Deseja realizar um novo cálculo?\n");
        scanf (" %c", &resposta);   
    }while (resposta == 's');

    return 0;
}