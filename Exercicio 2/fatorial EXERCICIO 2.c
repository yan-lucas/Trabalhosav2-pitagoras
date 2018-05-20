#include <stdio.h>
#include <locale.h>
int main()
{
 setlocale(LC_ALL, "portuguese");

 float resultado,digitado,resultadofinal;
 int cimafatorial,gambiarra,calculofatorial,repetir;
 repetir = 1;
 while (repetir==1)
  {
   printf ("\nDigite um valor a ser substituito por X, na seguinte expressão: 1 + X +2!/X + X/3! + 4!/X + X/5! + 6!/X + X/7! + 8!/X + X/9! :  ");
   scanf ("%f",&digitado);

    calculofatorial=1;
    cimafatorial=2;
    gambiarra=1;

    while ((cimafatorial>=2) && (cimafatorial<10))
    {
      calculofatorial = calculofatorial*cimafatorial;
      if (cimafatorial>2)
      {
        cimafatorial--;
        gambiarra++;
      }
      else if (gambiarra%2==0)
      {
        resultado = resultado + (digitado/calculofatorial);
        cimafatorial=cimafatorial+gambiarra;
        calculofatorial=1;
        gambiarra=1;
      }
       else
      {
       resultado = resultado + (calculofatorial/digitado);
       cimafatorial=cimafatorial+gambiarra;
       calculofatorial=1;
       gambiarra=1;
      }
    }
   resultadofinal=resultado+digitado+1;
   printf("\nO resultado é: %f \n ----------------------------------------------------------------------------\n",resultadofinal);
   printf("Deseja realizar a operação novamente? Digite 1 para sim e 2 para não: ");
   scanf ("%d",&repetir);
  }
  return 0;
}
