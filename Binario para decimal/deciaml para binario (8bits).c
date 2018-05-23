#include <stdio.h>
int main(){
int e = 52, i, d[8];
for (i=7 ; i>=0 ; i--){ d[i] = e%2; e = e/2;}
for (i=0;i<=7;i++){ printf ("%d", d[i]);}
return 0;
}
