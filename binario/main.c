#include <stdio.h>
#include <string.h>

// algoritmos de conversão
// float convertBinaryToDecimal() {
//     return 0;
// }

// float convertDecimalToBinary() {
//     return 0;
// }

// int convertTextToBit(char bit) {
//     if(bit == '0') return 0;
//     if(bit == '1') return 1;
//     return -1;
// }

// char subtractBinary(char binario1, char binario2) {
//     return '0';
// }

char* addZerosNaEsquerda(char *binario, int quantidade, char *novoBinario, int index) {
    int fimRecursao = (index == quantidade);

    if(fimRecursao) {
        return strcpy(novoBinario + quantidade, binario);
    }

    novoBinario[index] = '0';

    return addZerosNaEsquerda(binario, quantidade, novoBinario, ++index);
}

char somarBinarios(char *binario1, char *binario2) {
    int tamanhoBinario1 = strlen(binario1);
    int tamanhoBinario2 = strlen(binario2);

    if (tamanhoBinario1 == tamanhoBinario2) {

    }

    if (tamanhoBinario1 > tamanhoBinario2) {
        int quantidade_de_zeros_q_faltam = (tamanhoBinario1 - tamanhoBinario2);
        char novo_binario2[tamanhoBinario2 + quantidade_de_zeros_q_faltam + 1];
        addZerosNaEsquerda(
            binario2, 
            quantidade_de_zeros_q_faltam, 
            novo_binario2, 
            0
        );
    }

    if(tamanhoBinario2 > tamanhoBinario1) {
        int quantidade_de_zeros_q_faltam = (tamanhoBinario2 - tamanhoBinario1);
        char novo_binario1[tamanhoBinario1 + quantidade_de_zeros_q_faltam + 1];

        addZerosNaEsquerda(
            binario1, 
            quantidade_de_zeros_q_faltam, 
            novo_binario1, 
            0
        );
    }

    return '0';
}

int main() {
    somarBinarios("00010101", "1110");
    return 0;
}