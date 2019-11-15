#include <iostream>
#include <cstdio>
#include<string>
#include<cstdlib>
using std::string;
using std::getline;
using namespace std;

void exibirboneco (int qtderros){

  cout << "\n_________________\n\n";

  if (qtderros == 0){
    cout << "|-----    " << "\n"; 
    cout << "|         " << "\n";
    cout << "|         " << "\n";
    cout << "|         " << "\n";
    cout << "|         " << "\n";
    cout << "|         " << "\n";
  }

  if (qtderros == 1){
    cout << "|-----    " << "\n"; 
    cout << "|    O    " << "\n";
    cout << "|         " << "\n";
    cout << "|         " << "\n";
    cout << "|         " << "\n";
    cout << "|         " << "\n";
  }

  if (qtderros == 2){
    cout << "|-----    " << "\n"; 
    cout << "|    O    " << "\n";
    cout << "|    |    " << "\n";
    cout << "|         " << "\n";
    cout << "|         " << "\n";
    cout << "|         " << "\n";
  }

  if (qtderros == 3){
    cout << "|-----    " << "\n"; 
    cout << "|    O    " << "\n";
    cout << "|    |\\   " << "\n";
    cout << "|         " << "\n";
    cout << "|         " << "\n";
    cout << "|         " << "\n";
  }

  if (qtderros == 4){
    cout << "|-----    " << "\n"; 
    cout << "|    O    " << "\n";
    cout << "|   /|\\   " << "\n";
    cout << "|         " << "\n";
    cout << "|         " << "\n";
    cout << "|         " << "\n";
  }

  if (qtderros == 5){
    cout << "|-----    " << "\n"; 
    cout << "|    O    " << "\n";
    cout << "|   /|\\   " << "\n";
    cout << "|     \\    " << "\n";
    cout << "|         " << "\n";
    cout << "|         " << "\n";
  }

  if (qtderros == 6){
    cout << "|-----    " << "\n"; 
    cout << "|    O    " << "\n";
    cout << "|   /|\\   " << "\n";
    cout << "|   / \\    " << "\n";
    cout << "|         " << "\n";
    cout << "|         " << "\n";
  }

  cout << "\n_________________\n\n";
}

void exibirjogo (string frase, char letraescolhida, int tam){
  int n;
  

  for (n = 0;n < tam; n++){
    if (letraescolhida != frase[n]){
    cout << "-";
    }

    else {
      cout << letraescolhida;
      
    }
  }

  

}

int main() {
  int opcini;
  int tam;
  int n;
  int opcpalavra;
  int qtderros = 0;
  int limerros = 6;
  string frase;
  string dica;
  
  char letraescolhida = '0'; 

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

  // STRLEN 
  for (n = 0; n<64; n++){
    if (frase[n] == '\0'){
      tam = n;
      break;
    }
  }

  string tentativa[tam];

  for (n = 0; n < tam; n++){
    tentativa[n] = " ";
  }

  while (1){
    exibirboneco(qtderros);
    exibirjogo(frase, letraescolhida, tam);
    
    cout << "\nEscolha uma letra : ";
    cin >> letraescolhida;
    qtderros++;
  }
  }
  if (opcini == 2){
    cout << "Tchau";
  }
}