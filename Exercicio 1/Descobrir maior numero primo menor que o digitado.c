#include <stdio.h>
#include <locale.h>


int main(){					// inicia programa
setlocale(LC_ALL, "portuguese");	// Faz o programa aceitar caracteres do idioma brasileiro
int digitado,resto,divisor, primo, verifica, repetir;	// cria variaveis que ser�o utilizadas


repetir = 1;	// atribui valor para que o programa inicie no proximo while
while (repetir<2){		//Enquanto repetir for menor que 2, executa todo programa abaixo
printf("\nDigite um numero inteiro para saber qual o maior numero primo menor que ele: "); 	// pede para que usuario digite um valor
scanf("%d",&digitado);	//Armazena o valor digitado pelo usuario na varaivel "digitado"
verifica = 3;		// atribui o valor numerico "3" a variavel " verifica "
repetir = 2;		// atribui o valor numerico "2" a variavel " repetir "
if (digitado>2){	// Se o valor digitado for maior que 2, executa o resto do programa

	while ((digitado>2) && (verifica!=1)){		// enquanto o valor digitado for maior que 2 e o valor do verifica for diferente de 0, executa o resto do programa
		digitado--;								// diminui 1 do valor digitado pelo usuario
		resto = 1;								// atribui o valor numerico "1" a variavel " resto "
		divisor = 2;							// atribui o valor numerico "2" a variavel " divisor "
	while ((resto!=0) && (digitado>divisor)) {	// enquanto resto � diferente de 0 e o numero digitado � maior que o divisor, executa o resto do programa
		resto = digitado%divisor;				// guarda na variavel resto, o resto da divis�o de digitado para divisor
		divisor++;								// adiciona 1 ao valor armazenado na variavel divisor

		if ((resto!=0) && (divisor>=digitado)){	// se resto for diferente de 0 e a variavel divisor for maior ou igual ao valor digitado, executa o resto do programa
			primo = digitado;					// guarda na variavel primo o atual valor da variavel "digitado"
			verifica = 1;						// atribui o valor 1 a variavel verifica, pois o primo ja foi encontrado e se a variavel n�o for alterada o programa ira procurar o proximo numero primo
			printf ("\nO maior numero primo menor que o digitado é: %d\n------------------------------------------------------------------------------------", primo);		// exibe o numero primo na tela
			printf ("\n\nDeseja realizar uma nova consulta? Digite 1 para sim e 2 para não: ");		// Pergunta ao usuario se o mesmo quer fazer outra consulta
			scanf ("%d",&repetir);		// armazena o valor digitado, se for digitado 1 o programa reinicia do come�o, se 2 o programa encerra.
		}
		else {

		}
	}
	}
	}
else{
	printf("\nNão há numeros primos menores que esse");	// linha executada se o valor digitado no inicio do programa for inferior ou igual a 2
	printf ("\n\nDeseja realizar uma nova consulta? Digite 1 para sim e 2 para não: ");	// Pergunta ao usuario se o mesmo quer fazer outra consulta
	scanf ("%d",&repetir);	// armazena o valor digitado, se for digitado 1 o programa reinicia do come�o, se 2 o programa encerra.
	}
	}


return 0;
}
