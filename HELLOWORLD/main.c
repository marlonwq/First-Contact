#include <locale.h>

#include <stdio.h> // Pra corrigir e ser exibido caracteres especiais como o acento no "Olá mundo".

int main(void)
{
    setlocale(LC_ALL, "Portuguese"); //Pra corrigir e ser exibido caracteres especiais como o acento no "Olá mundo".
    printf("Olá Mundo");
    return 0;
}