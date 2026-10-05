#include <stdio.h>

struct paciente {
    char nome[50];
    int idade;
    float peso;
    char sangue[3];
};

int main() {

    struct paciente p;

    printf("Digite seu nome: ");
    scanf("%s", &p.nome);//só le o primeiro nome aqui (e nao tem & nesse caso), para ler o nome completo usar fgets

    printf("Digite sua idade: ");
    scanf("%d", &p.idade);

    printf("Digite seu peso: ");
    scanf("%f", &p.peso);

    printf("Digite o seu tipo de sangue: ");
    scanf("%s", &p.sangue);// idem ao nome

    return 0;
}
