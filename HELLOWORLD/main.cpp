#include <iostream>
#include <locale.h> // Para corrigir e ser exibido caracteres especiais como o acento no "Olá mundo".

using namespace std;

int main(int /* arge */, char const *argv[])
{
  setlocale(LC_ALL, "Portuguese"); // Para corrigir e ser exibido caracteres especiais como o acento no "Olá mundo".
  std::cout << "Olá Mundo" << std::endl;
  return 0;
}