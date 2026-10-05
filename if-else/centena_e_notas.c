/*#include <stdio.h>

int main (){

int n1, c, d, u;

printf("Digite um numero ate mil: ");
scanf("%d", &n1);

if (n1 > 1000 || n1 < 0){

    printf("Numero invalido");
}

else{

c = n1/100;
d = (c%100) / 10;
u = d%10;

printf("Centena: %d, ", c);
printf("Dezena: %d, ", d);
printf("Unidade: %d, ", u);
}

return 0;
}
*/


#include <stdio.h>

int main (){

int valor num,um = 1,cinco,dez,cinquenta,cem;
scanf("%d",&num);
if(num <0){
    printf("numero invalido")
}
else{
    cem = num/100;
    cinquenta = num%100)/50;
    cinco = cinquenta%50)/5;
    um = cinco
}

return 0;
}
