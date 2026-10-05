/*#include <stdio.h>

int main () {

    int num = 100;


    while (num >= 100 && num <= 500){

    if(num%11 == 5){
      printf("%d/11 = 5", num);
      num++;
    }
    else{
        num++;
        }
        }
    prinf("FIMMMMMMMMMMM");
    return 0;
}


#include <stdio.h>

int main (){

    float paisA = 80000, paisB = 200000, txCresciA = 0.03, TxCresciB = 0.015;
    int ano = 0;


    while (paisA < paisB){

    paisA = paisA + (paisA*txCresciA);
    paisB= paisB + (paisB*TxCresciB);
    ano++;
    }
    if (paisA >= paisB){

    printf("O pais A demorou %d anos para conseguir igualar ou ultrapassar o pais B", ano);
    }

return 0;
}*/


#include <stdio.h>

int main (){

    int n,nANT = 0, seq = 0, quantSeq;

    prinf("Digite quantos numeros vc quer na sequencia: ");
    scanf("%d\n", &quantSeq);

    printf("Digite os numeros: ");
    scanf("%d", &n);
    seq++;

    if(n>0){

        while(quantSeq >= seq){
        nANT = n;
        printf(" ");
        scanf("%d", &n);
        seq++;

        if(n < nANT){

            printf("Sequencia quebrada seu bosta");
            break;
        }
        }
    }
    else{
        printf("VC É UM BOSTA");
    }
    return 0;
}
