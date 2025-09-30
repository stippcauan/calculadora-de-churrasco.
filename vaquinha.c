#include <stdio.h>
//Variavel global 
float totalArrecadado = 0; 

// Procedimento:adiciona a contribuição de um participante
void adicionaContribuicao(float valor){
    totalArrecadado += valor;
    printf("Contribuição de R$ %.2f adiciona! Total: R$ %.2f", valor, totalArrecadado);
}

//função: calcula quantidade de carne por pessoas(0.5kg por pessoa)

float calculaCarne(int qtdPessoas){
    return qtdPessoas * 0.5;
}


// Procedimento para mostrar o resumo
void mostraResumo(int qtdPessoas){
    float carne = calculaCarne(qtdPessoas);
    float média = totalArrecadado / qtdPessoas;
    printf("\n====== RESUMO CHURRASCO ======\n");
    printf("Participantes: %d\n", qtdPessoas);
    printf("Carne necessária : %2f KG\n", carne);
    printf("Total arrecadado: R$ %.2f\n", totalArrecadado);
    printf("Média por pessoa: R$ %.2f\n", média);
    printf("================================\n");

}

int main(){
 int pessoas;
 float valor;

 printf("Digite o número de participantes: ");
 scanf("%d",&pessoas);

 for (int i =1 ; i <= pessoas; i++){
    printf("Digite a contribuição do participante %d: R4$ ", i);
    scanf("%f", &valor);
    adicionaContribuicao(valor);
 }

 mostraResumo(pessoas);
}