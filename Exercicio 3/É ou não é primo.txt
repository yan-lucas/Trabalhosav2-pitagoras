#include <stdio.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL,"portuguese");
  int digitado,divisores,repetir;
  repetir = 1;
 while (repetir==1)
    {
  printf("\nDigite um numero para saber se o mesmo é primo ou não é: ");
  scanf("%d",&digitado);

  divisores=digitado-1;
  while((digitado%divisores!=0) && (divisores>1))
  {
    divisores--;
  }

    if (divisores == 1){

      printf ("\nÉ primo\n");
      printf ("\nDeseja realizar uma nova operação? Digite 1 para sim e 2 para não: ");
      scanf ("%d",&repetir);
      }
    else {
      printf("\nNão é primo\n");
      printf ("\nDeseja realizar uma nova operação? Digite 1 para sim e 2 para não: ");
      scanf ("%d",&repetir);

    }
    }
  return 0;

}
