//Jo�o Papo-de-Pescador, homem de bem, comprou um microcomputador para controlar o rendimento di�rio de seu trabalho. Toda vez que ele traz um peso de peixes maior que o estabelecido pelo regulamento de pesca do estado de S�o Paulo (50 quilos) deve pagar uma multa de R$ 4,00 por quilo excedente. Jo�o precisa que voc� fa�a um Fluxograma que leia a vari�vel P (peso de peixes) e verifique se h� excesso. Se houver, gravar na vari�vel E (Excesso) e na vari�vel M o valor da multa que Jo�o dever� pagar. Caso contr�rio mostrar tais vari�veis com o conte�do ZERO.  
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

