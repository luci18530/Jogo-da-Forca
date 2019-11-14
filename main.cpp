#include <iostream>
#include <cstdio>
#include<string>
#include<cstdlib>
using std::string;
using std::getline;
using namespace std;

void exibirjogo (string frase){
  int n;
  int tam;
  for (n = 0; n<64; n++){
    if (frase[n] == '\0'){
      tam = n;
      break;
    }
  }

  
}

int main() {
  int opcini;
  int opcpalavra;
  string frase;
  string dica;

  cout << "BEM VINDO AO JOGO DA FORCA\n--------------------------\nDigite a opção:\n" << "1- Jogar\n2- Sair\n";

  cin >> opcini;

  if (opcini == 1){
    cout << "Selecione um numero de 1 a 10, cada numero é uma palavra diferente\nSua escolha: ";
    cin >> opcpalavra;
    cout << "\n";

    if (opcpalavra == 1){frase = "CARRO"; dica = "Veiculo";}
    if (opcpalavra == 2){frase = "BANANA"; dica = "Alimento";}
    if (opcpalavra == 3){frase = "VENEZUELA"; dica = "País";}
    if (opcpalavra == 4){frase = "ITAQUAQUECETUBA"; dica = "Cidade";}
    if (opcpalavra == 5){frase = "SATURNO"; dica = "Planeta";}
    if (opcpalavra == 6){frase = "MAMUTE"; dica = "Animal";}
    if (opcpalavra == 7){frase = "SIFILIS"; dica = "DST";}
    if (opcpalavra == 8){frase = "POTASSIO"; dica = "Elemento quimico";}
    if (opcpalavra == 9){frase = "REALISTA"; dica = "Adjetivo";}
    if (opcpalavra == 10){frase = "MORREU"; dica = "Verbo";}

    exibirjogo(frase);
    
  }
  if (opcini == 2){
    cout << "Tchau";
  }
}