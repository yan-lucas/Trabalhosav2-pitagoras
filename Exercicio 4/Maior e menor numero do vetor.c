#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL, "portuguese");
int v[5],i;

  for (i=0; i<5; i++){
    printf("Digite 5 numeros, digite um, aperte ENTER e digite o segundo, faça o mesmo ate o quinto numero: ");
    scanf ("%d",&v[i]);}

int i1=0, i2=1, m1=v[i1], m2=v[i2],me, ma;
  while ((i2<5) && (i1<5)){
    if (m1>m2) {
      ma = m1;
      i2++;
      m2=v[i2];}
    else {
      ma = m2;
      i1++;
      m1=v[i1]; }}

i1=0, i2=1, m1=v[i1], m2=v[i2];
  while ((i2<5) && (i1<5)){
    if (m1<m2) {
      me = m1;
      i2++;
      m2=v[i2];}
    else {
      me = m2;
      i1++;
      m1=v[i1]; }}

printf("O maior numero digitado é: %d \nO menor é: %d", ma, me);
return 0;
}
