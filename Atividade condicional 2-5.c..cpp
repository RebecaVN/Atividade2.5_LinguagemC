//João Papo-de-Pescador, homem de bem, comprou um microcomputador para controlar o rendimento diário de seu trabalho. Toda vez que ele traz um peso de peixes maior que o estabelecido pelo regulamento de pesca do estado de São Paulo (50 quilos) deve pagar uma multa de R$ 4,00 por quilo excedente. João precisa que você faça um Fluxograma que leia a variável P (peso de peixes) e verifique se há excesso. Se houver, gravar na variável E (Excesso) e na variável M o valor da multa que João deverá pagar. Caso contrário mostrar tais variáveis com o conteúdo ZERO.  
 #include <stdio.h>

int main() {
    float P, excesso, multa;
    printf("Digite o peso dos peixes em quilos: ");
    scanf("%f", &P);

    if (P > 50) {
        excesso = P - 50;
        multa = excesso * 4;
    } else {
        multa = 0;
    }

    printf("Peso de peixes: %.2f kg\n", P);
    if (multa > 0) {
        printf("Excesso de peso: %.2f kg\n", excesso);
        printf("Multa a pagar: R$ %.2f\n", multa);
    } else {
        printf("Nao ha excesso de peso. Multa: R$ 0,00\n");
    }

    return 0;
}

