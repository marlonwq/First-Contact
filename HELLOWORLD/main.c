#include <locale.h>

#include <stdio.h> // Pra corrigir e ser exibido caracteres especiais como o acento no "Ol� mundo".

int main(void)
{
    setlocale(LC_ALL, "Portuguese"); //Pra corrigir e ser exibido caracteres especiais como o acento no "Ol� mundo".
    printf("Ol� Mundo");
    return 0;
}