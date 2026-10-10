#include<stdio.h>

   

int main()
{   
    float resultado_div;
    int escolha, numero, resultado_soma, resultado_sub, resultado_mult;
    printf("Qual tabuada quer fazer? 1-ADICAO 2-SUBTRACAO 3-MULTIPLICACAO 4-DIVISAO: ");
    scanf("%i", &escolha);
    printf ("Qual numero deseja ver a tabuada? ");
    scanf("%i", &numero);

    if (escolha == 1)
    {
        for (int i = 0; i <= 10; i++)
        {
            resultado_soma = numero + i;
            printf("%i + %i = %i\n", numero, i, resultado_soma);
        }
    }
    else if (escolha == 2)
    {
        for (int i = 10; i >= 0; i--)
        {
            resultado_sub = numero - i;
            printf("%i - %i = %i\n", numero, i ,resultado_sub);
        }
    }
    else if (escolha == 3)
    {
        for (int i = 0; i <= 10; i++)
        {
            if (numero == 0)
            {
                printf("Todo numero multiplicado por 0 eh 0!");
                break;
            }
            resultado_mult = numero * i;
            printf("%i x %i = %i\n", numero, i, resultado_mult);
        }
    }
    else if (escolha == 4)
    {
        for (int i = 10; i >= 1; i--)
        {
          if (numero == 0)
            {
                printf("Nao eh possivel dividir por 0!");
                break;
            }
            resultado_div = (float)numero / i;
            printf("%i / %i = %.2f\n", numero, i,resultado_div);
        }
    }
    else
        printf("Opcao invalida digite de 1 a 4!");
return 0;
}
