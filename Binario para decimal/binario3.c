#include <stdio.h>
#include <math.h>
int main(){
int e = 1000, r, i, d[10];
for (i = 0 ; e>=1 ; i++){
d[i] = e%2;
e = e/2;
r = r + d[i]* pow (10,i);
}
printf("%d",r);
  return 0;
}
