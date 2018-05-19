#include <stdio.h>

int main(){
int inserido, sobra, divisor, verificando;

// pede ao usuario que digite um numero para ser verificado e armazenado em "inserido"


printf("\nInsira um numero para saber o primo menor mais proximo: ");
scanf("%d",&inserido);

// Verifica se o numero digitado é maior que 2, pois não existem primos menores que 2, caso for menor que 2 o programa encerra

if (inserido>2){
    // while responsavel por subtrair 1 do numero digitado, só para de repetir quando o verificando receber 1.
    // verificando só recebe 1 se o primo for encontrado
    /* Sobra tem que começar com 1, para o proximo while executar. divisor começa em 2, pois ja sei que qualquer
    numero é divisivel por 1 e por ele mesmo */
    // inserido recebe menos 1, pois quero saber o primo MENOR que o digitado, logo preciso subtrair de primeira

	while ((inserido>2) && (verificando!=1)){
		inserido--;
		sobra = 1;
		divisor = 2;

    /* While responsavel por pegar o numero inserido e dividir por todos os numeros apartir de 2 até o numero
    menor que ele mesmo ex: Se inserido tiver 19 vai dividir 19 por 2, por 3, por 4, até o 18*/
    /* o sobra guarda o valor do resto da divisão, para verificar se o resultado sempre é diferente de 0, pois
    tem que ser para o numero ser primo. */
	while ((sobra!=0) && (inserido>divisor)) {
		sobra = inserido%divisor;
		divisor++;
    /*O numero só vai ser primo quando todas as divisões resultarem em resto 0, IF tbm verifica se todas as divisões
    foram executadas, veja que ele verifica se o divisor é maior ou igual ao valor inserido,*/
    // O programa só executa esse IF quando o primo for encontrado então ele ja pode mostrar o primo na tela
    // verificando recebe 1 para que possa cancelar o loop e não verificar o proximo numero anterior, pois ja encontrou o que queria.
		if ((sobra!=0) && (divisor>=inserido)){
			verificando = 1;
			printf ("\nO primo primeiramente anterior é: %d", inserido);
		}
		else {

		}
	}
	}
	}
else{

}
return 0;
}
