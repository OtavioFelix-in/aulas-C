/*#include <stdio.h>

int main(){

    int i = 1;

    while (i<=100){

     printf("%d\n", i);
     i++;

    }
    printf("Fim.....");

    return 0;
}
*/

/*#include <stdio.h>

int main () {

char sexo;

printf("Digite seu sexo M ou F: ");
scanf("%c", &sexo);


while(sexo != "F" && sexo != "f" && sexo != "M" && sexo == "m"){
    printf("Invalido, digite M ou F: ");
    scanf("%c", &sexo);

}

if (sexo == "M" || sexo == "m"){
    printf("Seu sexo e masculino");
}

else{

    prinf("Seu sexo e feminino.");
}
return 0;
}*/



/*
#include <stdio.h>
int main(){
int num, i = 0;
printf("Digite um numero: ");
scanf("%d", &num);

while(i<=10){

   printf("%d x %d = %d\n", &num, i, num*i);
   i++;
}
return 0;
}*/
#include <stdio.h>

int main (){

int senha, tenta, tentativas = 5;

printf("Cadastre sua senha: ");
scanf("%d\n \n \n \n", senha);

printf("Digite sua senha: ");
scanf("%d", &tenta);

while(tenta != senha && tentativas >=5){

    printf("Senha incorreta, digite novamente: ");
    scanf("%d\n", tenta);
    tentativas--;
    printf("Vc tem %d, tentativas", &tentativas);
}

if(senha == tenta){

    printf("Acesso liberado!")
}

return 0;
}
