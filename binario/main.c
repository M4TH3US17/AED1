#include <stdio.h>
#include <string.h>
// #include <stdlib.h>

// algoritmos de conversão
float convertBinaryToDecimal() {
    return 0;
}

float convertDecimalToBinary() {
    return 0;
}

/**
 * Converte um caractere que representa um bit em seu valor inteiro correspondente
 * 
 * @param bit Caractere a ser convertido. Deve ser '0' ou '1'
 * @return int Retorna 0 se o caractere for '0', 1 se for '1', ou -1 se for inválido
 * 
 * @example
 * int resultado1 = convertTextToBit('0'); // retorna 0
 * int resultado2 = convertTextToBit('1'); // retorna 1  
 * int resultado3 = convertTextToBit('a'); // retorna -1
 */
int convertTextToBit(char bit) {
    if(bit == '0') return 0;
    if(bit == '1') return 1;
    return -1;
}

// algoritmos de operações binárias
char sumBinary(char binario1, char binario2) {
    return '0';
}

char subtractBinary(char binario1, char binario2) {
    return '0';
}

int main() {

    char binario1[30];
    char binario2[30];

    printf("Digite o primeiro binário: ");
    scanf("%29s", &binario1);

    printf("Digite o segundo binário: ");
    scanf("%29s", &binario2);

    // Operações com números binarios
    char somaDosBinarios = sumBinary(binario1, binario2);

    printf("%s %s", binario1, binario2);
    return 0;
    // system("pause");
}