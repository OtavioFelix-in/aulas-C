/*#include <stdio.h>*/

/*int main () {

    char letra;

    printf("Digite F ou M: ");
    scanf("%c", &letra);

    if(letra == 'f' || 'F'){
        printf("Feminino");
    }
    else {
        if(letra == 'M' || 'm'){
        printf("Masculino");
    }
            printf("Letra Desconhecida")
        }

return 0;
}*/


/*int main (){

    char letra;

    printf("Digite a letra e falarei se e vogal ou consoante: ");

    scanf("%c, &letra");

    if (letra == 'a' || letra == 'A' || letra == 'e' || letra == 'E' || letra == 'i' || letra == 'I' || letra == 'o' || letra == 'O' || letra == 'u' || letra == 'U') {

        printf("Sua letra e uma vogal");
    }

    else {
        printf("Sua letra e uma consoante");
    }
return 0;
}*/

// Par ou Impar

/*int main () {

    int num;

    printf("Digite um numero e eu direi se e impar ou par: ");
    scanf("%d", &num);

    if(num % 2 == 0){

        printf("Numero Par");
    }
    else{

        printf("Numero Impar");
    }

return 0;
}*/


/*int main () {

    int num;

    printf("Digite um numero e eu direi se ela e divisivel por 3 ou 5: ");
    scanf("%d", &num);

    if(num % 3 == 0 || num & 5 == 0){

    printf("Seu numero divide");

    }

    else{

       printf("Seu numero nao divide");

    }
    return 0;
}*/


/*int main() {

    int n1, n2, n3;

    printf("Digite 3 numeros: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 > n2 && n1 > n3) {
        printf("Seu maior numero e: %d", n1);
    }
    else if (n2 > n1 && n2 > n3) {
        printf("Seu maior numero e: %d", n2);
    }
    else {
        printf("Seu maior numero e: %d", n3);
    }

    return 0;
}*/

/*
#include  <stdio.h>

int main () {

    int idade;

    printf("Digite sua idade: ")
    scanf("%d", &idade)

    if(idade <= 19) {{
        printf("Jovem");
    }

    else if(idade < 60){
        printf("Adulto");
    }

    else{
        printf("Velho");
    }

return 0;
}*/

#include <stdio.h>

int main () {

int lado1, lado2, lado3;

printf("digite os lados do triangulo: ")
scanf("%d %d %d", &lado1, &lado2, lado3);

if(lado1 == lado2 && lado2 == lado3){
    printf("todos os lados são iguais");
}
else if (lado1 != lado2 && lado2 == lado3 || lado1 == lado3 && lado1 != lado2){
    print("Dois lados iguais")
}
else{

    printf("Todos os lados sao diferentes");
}

return 0
}
